#ifndef HOLBERTON
#define HOLBERTON

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
int _putchar(char c);
int _printf(const char *format, ...);
char (*get_print_func(char *s))(char);
#endif
