#include "main.h"
/**
 *the functions convers binary numbers to unasigned int.
 *
 *The return value is unasigned int 
 *Author: McOuma
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int decimalValue = 0;
if (!b)
return (0);
for (x = 0; b[x] != '\0'; x++){
if (b[x] < '0' || b[x] > '1')
return (0);
decimalValue = 2* decimalValue + (b[x]-'0');
}
return (decimalValue);
}
