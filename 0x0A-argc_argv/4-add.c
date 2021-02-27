#include "holberton.h"
/**
  * main - adds positive numbers
  * @argc: is the number of command line arguments
  * @argv: is an array containing the program command line arguments
  * Return: 1 if one of the number contains symbols that are not digits
**/
int main(int argc, char *argv[])
{
		int add = 0, i, a;
		char *str;

		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				str = argv[i];
				for (a = 0; str[a]; a++)
				{
					if (str[a] < 48 || str[a] > 57)
					{
						printf("Error\n");
						return (1);
					}
				}
			}
		}
		for (i = 1; i < argc; i++)
			add += atoi(argv[i]);
		printf("%d\n", add);
		return (0);
}
