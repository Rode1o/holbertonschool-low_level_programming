#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Make a valid key to crackme
 * Return: Always 0 (Success)
 *
 *From cutter i found 0xad4 that is a hexadecimal number
 *,to translate it to decimal is 2772 , in fucntion checksum
 *( inside the crackme), returns the sum about ASCII code, so
 *there are <255 printable characters
 */
int main(void)
{
	int n = 0, key = 0;

	srand(time(NULL));

	while (n < 2772)
	{
		key = rand() % 255;
		if ((key < 127))
		{
			if ((n + key <= 2772))
			{
				n += key;
				putchar(key);
			}
		}
	}
	return (0);
}
