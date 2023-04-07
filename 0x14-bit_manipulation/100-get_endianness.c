#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int w;
char *e;
w = 1;
e = (char *) & w;
return ((int)*e);
}
