#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @string: pointer to the string
 * Return: A translated string
 */

char *leet(char *string)
{
	int a;
	int b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{
			if (string[a] == lower[b] || string[a] == upper[b])
			{
				string[a] = numbers[b];
				break;
			}
		}
	}

	return (string);
}
