#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int fish;
char *o;
fish = 1;
o = (char *) & fish;
return ((int)*o);
}
