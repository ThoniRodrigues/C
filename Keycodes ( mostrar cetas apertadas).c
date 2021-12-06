// attempt  to trap arrow keys
// tested with Code::Blocks 8.02
#include <stdio.h>
static int get_code(void);
// System dependent key codes
enum
{
    KEY_ESC     = 27,
    ARROW_UP    = 256 + 72,
    ARROW_DOWN  = 256 + 80,
    ARROW_LEFT  = 256 + 75,
    ARROW_RIGHT = 256 + 77
};
int main(void)
{
    int ch;
    puts("Press arrow keys, escape key + enter to exit:");
    while (( ch = get_code()) != KEY_ESC )
    {
        switch (ch)
        {
        case ARROW_UP:
            printf("UP\n");
            break;
        case ARROW_DOWN:
            printf("DOWN\n");
            break;
        case ARROW_LEFT:
            printf("LEFT\n");
            break;
        case ARROW_RIGHT:
            printf("RIGHT\n");
            break;
        }
    }
    getchar();   // wait
    return 0;
}
static int get_code(void)
{
    int ch = getch();
    if (ch == 0 || ch == 224)
        ch = 256 + getch();
    return ch;
}
