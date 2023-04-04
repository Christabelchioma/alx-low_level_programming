#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 * @s: starting adress of memory to be filled
 * @n: number of bytes to be charged
 * @b: the desired value
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
