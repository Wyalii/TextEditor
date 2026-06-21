#include <termios.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);

    printf("c_lflag: %lu\n", t.c_lflag);
    printf("c_iflag: %lu\n", t.c_iflag);
    printf("c_oflag: %lu\n", t.c_oflag);
    printf("c_cflag: %lu\n", t.c_cflag);
    return 0;
}