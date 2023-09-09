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
    int car, car1, car2, car3;

    for (car = 0; car <= 9; car++)
    {
        for (car1 = 0; car1 <= 9; car1++)
        {
            for (car2 = car; car2 <= 9; car2++)
            {
                for (car3 = (car2 == car) ? car1 + 1 : 0; car3 <= 9; car3++)
                /**
                * if car2==car is true then car3=car1+1
                *if car2==car is false then car3=0
                *
                */

                {
                    putchar(car + '0');
                    putchar(car1 + '0');
                    putchar(' ');
                    putchar(car2 + '0');
                    putchar(car3 + '0');

                    if (!(car == 9 && car1 == 8 && car2 == 9 && car3 == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
