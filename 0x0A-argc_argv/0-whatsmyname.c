#include "holberton.h"
/**
  * main - print its name
  * @argc: the number of command line arguments
  * @argv: array containint the program command line arguments
  * Return: 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
