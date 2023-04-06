#include<stdio.h>
#include "main.h"
/**
 * Function to print binary representation of a number without using the following
 * 
 * arrays, malloc and % or / operators
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
int binary;
if (n >> 1)
print_binary(n >> 1);
binary = n & 1;
putchar(binary + '0');
}
int main()
{
return 0;
}
