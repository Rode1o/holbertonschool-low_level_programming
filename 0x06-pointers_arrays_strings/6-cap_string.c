#include "holberton.h"
/**
  * cap_string - capitalize all words of a string
  * @s: string
  * Return: pointer to string s
**/
char *cap_string(char *s)
{
int i = 0, j = 0;
char sep [] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t'};
if (s[0] >= 'a' && s[0] <= 'z')
	s[0] = s[0] - 32;
while (s[i] != '\0')
{
while (sep[j] != '\0')
{
if (s[i] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
j++;
}
i++;
}
return (s);
}
