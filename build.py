import click
import os
import serial
import sys

boards = ['Kromek']
targets = ['Debug', 'Simulate', 'Test']

class Board:
    def __init__(self, name):
        self._name = name

    @staticmethod
    def init(name):
        board = name.capitalize()
        if board not in boards:
            click.echo('Board {} not supported, choose from: {}'.format(board, boards))
            return
        return Board(board)

    def build_target(self, target):
        directory = self._get_build_directory(target)
        if not os.path.exists(directory):
            os.mkdir(directory)
        cmd = 'cd {}; cmake ../  -DCMAKE_BUILD_TYPE={}; make -j4'.format(directory, target.capitalize())
        os.system(cmd)

    def clean(self):
        for target in targets:
            self._clean_target(target)

    def purge(self):
        for target in targets:
            self._purge_target(target)

    def flash(self):
        self.build_target('Debug')
        cmd = self._flash_cmd('Debug')
        os.system(cmd)

    def test(self):
        self.build_target('Test')
        cmd = self._flash_cmd('Test')
        os.system(cmd)
        ser = serial.Serial('/dev/ttyACM0', 115200)
        print "\r\nTESTS START\r\n"
        while True:
            line = ser.readline()
            if 'Elon!' in line:
                return
            sys.stdout.write(line)

    def _get_build_directory(self, target):
        return '{}/cmake-build-{}'.format(self._name, target.lower())

    def _clean_target(self, target):
        directory = self._get_build_directory(target)
        if not os.path.exists(directory):
            return
        print 'Cleaning', directory
        cmd = 'cd {}; make clean'.format(directory, target)
        os.system(cmd)

    def _purge_target(self, target):
        directory = self._get_build_directory(target)
        cmd = 'rm -rf {}'.format(directory)
        print 'Purging', directory
        os.system(cmd)

    def _flash_cmd(self, target):
        return "openocd -c 'tcl_port disabled' -s openocd/scripts -c 'gdb_port 3333' -c 'telnet_port 4444' -f " \
               "st_nucleo_f4.cfg -c 'program {}/cmake-build-{}/Kromek.elf' -c reset -c shutdown".format(self._name, target.lower())


@click.group()
def main():
    pass


@main.command()
@click.argument('board')
def build(board):
    b = Board.init(board)
    b.build_target('Debug')


@main.command()
@click.argument('board')
def clean(board):
    b = Board.init(board)
    b.clean()


@main.command()
@click.argument('board')
def purge(board):
    b = Board.init(board)
    b.purge()


@main.command()
@click.argument('board')
def simulate(board):
    b = Board.init(board)
    b.build_target('Simulate')


@main.command()
@click.argument('board')
def flash(board):
    b = Board.init(board)
    b.flash()


@main.command()
@click.argument('board')
def test(board):
    b = Board.init(board)
    b.test()


if __name__ == '__main__':
    main()