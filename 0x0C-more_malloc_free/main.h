#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void simple_print_buffer(int *buffer, unsigned int size);
#endif
