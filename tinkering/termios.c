#include <unistd.h>
int main(void)
{
    // STDIN_FILENO = 0;
    // STDOUT_FILENO = 1;
    // STDERR_FILENO = 2
    write(1, "hello??", 7);
}