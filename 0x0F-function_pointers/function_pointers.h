#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
int _putchar(char c);
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
#endif
