#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: string coming
  * Return: void
**/
void rev_string(char *s)
{
	    int l;
	    int i;
	    char b, e;
	    /**Calculating string length**/
	for (l = 0; s[l] != '\0'; l++)
	{
	}
	l--;
	/**Reverting the string **/
	for (i = 0; i <= l; i++)
	{
		b = s[i]; /**e--------- 0**/
		e = s[l]; /**b -------- 9**/

		s[i] = e; /**e--------9**/
		s[l] = b; /**b---------0**/
		l--;
	}
}
