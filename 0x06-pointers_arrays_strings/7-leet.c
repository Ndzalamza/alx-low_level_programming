#include "main.h"

/**
 * leet - encode into 1367speak
 * @n: iput value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; j < 10; i++)
	{
		if (n[i] == s1[j])
		{
			n[i] = s2[j];
		}
	}
}
