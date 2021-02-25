#include "holberton.h"

/**
 * _strlen - returns the length of a string in a recursive manner.
 * @s: the string to be print.
 *
 * Return: the length of the string.
 */
int _puts_recusrion(char *s)
{
	if (*s != '\0')
		return (1 + _puts_recusrion(s + 1));
	return (0);
}

/**
 * _palindrome - helper function to verify if a string is palindromic
 *               or not.
 * @s: the string to be operated upon.
 * @len: the length of the string.
 * @stop: the half of the string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _print_rev_recursion(char *s, int p, int q)
{
	if (*s != *(s + p))
		return (0);
	if (p >= q)
		return (_print_rev_recursion(s + 1, p - 2, q));
	return (1);
}

/**
 * is_palindrome - returns if a string is palindromic.
 * @s: the string to be operated.
 *
 * Return: the helper function _prime(n, 5)
 */
int is_palindrome(char *s)
{
	int p;
	int q;

	p = _puts_recursion(s);

	if (p % 2 == 0)
		q = (p / 2) - 1;
	else
		q = p / 2;

	if (p == 0)
		return (1);

	return (_printv_rev_recursion(s, p - 1, q));
}
