#include "main.h"
/**
 *the functions convers binary numbers to unasigned int.
 *
 *The return value is unasigned int 
 *Author: McOuma
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0;
int j, k;
int decimalValue = 1;
if (!b)
return (0);
for (j = 0; b[j] != '\0'; j++);
k = (j - 1);
for (; k >= 0; k--)
{
if (b[k] != '0' && b[k] != '1')
return (0);
if (b[k] == '1')
total += decimalValue;
decimalValue *= 2;
}
return (total);
}
