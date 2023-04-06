#include "main.h"
/**
 *the functions convers binary numbers to unasigned int.
 *
 *The return value is unasigned int 
 *
 */
unsinged int binary_to_uint(const char *b)
{
unsigned int result = 0;
int k = 0;
if (b == NULL){
return 0;
}
while (b[k] != '\0'){
if (b[k] ! = '0' && b[k] !='1'{
return 0;}
result = result << 1;
result += b[k] - '0';
k++;
}
return result;
}
