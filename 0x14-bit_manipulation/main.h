#define MAIN_H
#ifndef MAIN_H
unsigned int binary_to_unit(const char *b);
void print_binary(unsingned long int n);
int get_bit(unsiged long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif 
