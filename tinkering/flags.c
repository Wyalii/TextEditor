#include <termios.h>
#include <stdio.h>
int main()
{
    struct termios settings;
    tcgetattr(0, &settings); // load terminal settings (stdin = 0)

    printf("c_iflag: %lu\n", settings.c_iflag);
    printf("c_oflag: %lu\n", settings.c_oflag);
    printf("c_cflag: %lu\n", settings.c_cflag);
    printf("c_lflag: %lu\n", settings.c_lflag);

    settings.c_lflag &= ~(ECHO);
    printf("c_lflag: %lu\n", settings.c_lflag);
}