#include "main.h"
#define NULL 0

/**
*   _strpbrk - return pointer to byte in s that matches a byte in accept
*    @s: string to search
*     @accept: target matches
*      Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
