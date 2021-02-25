#include "holberton.h"
/**
  * _puts_recursion - checks the length of a string
  * @s: is the string
  * Return: return the leng of the string
**/
int _puts_recursion(char s)
{
	if (s == '\0')
		return (0);
	return (1 + _puts_recursion(s + 1));
}
/**
 *_print_rev_recursion - helper function to verify if a string is palindromic
 *               or not.
 * @s: the string to be operated upon.
 * @p: the length of the string.
 * @q: the half of the string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int _print_rev_recursion(char s, int p, int q)
{
	if (s != *(s + p))
	{
		return (0);
	}
	if (p >= q)
	{
		return (_print_rev_recursion(s + 1, p - 2, q));
}
	return (1);
}
/**
 *is_palindrome - returns if a string is palindromic.
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
	{
		q = ((p / 2) - 1);
	}
	else
	{
		q = p / 2;
	}
	if (p == 0)
		return (1);
	return (_print_rev_recursion(s, p - 1, q));
}
