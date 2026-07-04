#include <unistd.h>
#include <termios.h>
struct termios original_termios;
void disableRawMode()
{
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &original_termios);
}
void enableRawMode()
{
    tcgetattr(STDIN_FILENO, &original_termios);
    struct termios raw = original_termios;
    raw.c_lflag &= ~(ECHO);
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
    atexit(disableRawMode);
}
int main()
{
    enableRawMode();
    int c;
    // I could use STDIN_FILENO here since its same as 0.
    while (read(0, &c, 1) == 1 && c != 'q')
    {
    }

    return 0;
}