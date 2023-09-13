#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int c;

        print_alphabet();
        print_alphabet_x10();
        c = _islower('o');
        putchar(c + '0');
        c = _islower('108');
        putchar(c + '0');
        c = _islower('c');
        putchar(c + '0');
        c = _islower('I');
        putchar(c + '0');
        c = _islower('s');
        putchar(c + '0');
        c = _islower('70');
        putchar(c + '0');
         c = _islower('20');
        putchar(c + '0');
        c = _islower('U');
        putchar(c + '0');
        c = _islower('n');
         putchar(c + '0');
         c = _islower(0);
        putchar(c + '0');
        c = _islower('H');
        putchar(c + '0');
        putchar('\n');
        return (0);

}
