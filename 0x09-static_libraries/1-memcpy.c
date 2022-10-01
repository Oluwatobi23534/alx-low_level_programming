#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the momery area to copy from
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
