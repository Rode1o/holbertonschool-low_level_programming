#include "holberton.h"

/**
 * main - Prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 *
 * Return: If number of arguments is different than 2, return (1),
 *         Else, return (0).
 */

int main(int argc, char **argv)
{
	int i, value, cents;
	int coins[] = {25, 10, 5, 2, 1};

	i = cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	while (value > 0 && i < 5)
	{
		cents += value / coins[i];
		value = value % coins[i];
		i++;
	}

	printf("%d\n", cents);
	return (0);
}
