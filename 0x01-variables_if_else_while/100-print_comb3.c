#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int car;
        int car1;

        for (car = '0' ; car <= '8'  ; car++)
            for (car1 = car+1 ; car1 <= '9'  ; car1++){
                     {
                         if (car != car1)
                         {
                             putchar (car);
                             putchar (car1);
                             if ( car != 8 || car1 != 9)
                             {
                                 putchar(',');
                                 putchar(' ');
                             }

                         }

        }


            }
        putchar ('\n');
        return (0);
}
