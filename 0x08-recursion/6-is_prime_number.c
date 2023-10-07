#include "main.h"
/**
 *  prime_number - function prime
 *@n:var
 *@i:var other
 *
 * Return: Always zero or one.
 */
int prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i + 1));
}
/**
 * is_prime_number - function to print prime number
 *@n:number
 *
 * Return: Always one or zero
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
