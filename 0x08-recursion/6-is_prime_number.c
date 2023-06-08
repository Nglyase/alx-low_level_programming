#include "main.h"
/**
 *check_prime - helps to check if number is prime
 *@n: number to check
 *@i: divisor being tested
 *Return: 1 if n is prime, 0 if else
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 *@n: number to check
 *Return: 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
