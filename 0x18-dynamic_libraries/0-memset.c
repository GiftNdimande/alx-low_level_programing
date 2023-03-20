#include "main.h"
#include <stddef.h>
/**
 * _memset - Fills the first n bytes of the memory area
 * pointed by @s with byte @c
 * @s: A pointer to the memory area
 * @c: A character
 * @n: The number of bytes
 * Return: A pointer to the filled memory area @s
 */
void *_memset(void *s,int c, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}
	return (memory);
}
