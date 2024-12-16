#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>

int	ft_putnbr(int nb);
int	ft_putchar(char c);
int put_hexa(unsigned long h, char size);
int ft_printf(const char *, ...);
int ft_putstr(char *str);

#endif
