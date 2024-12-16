#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
int printer(char c, va_list va)
{
  int count = 0;
  if (c == 's')
    count =  ft_putstr(va_arg(va, char*));
  if (c == 'd')
    count = ft_putnbr(va_arg(va, int));
  if (c == 'c')
   count = ft_putchar(va_arg(va, int));
  if (c == 'c')
  
  return count;
}

int ft_printf(const char *test, ...)
{
  va_list va;
  va_start(va, test);
  int i = 0;
  int count = 0;
  while (test[i]) 
  {
    if (test[i] == '%' && test[i+1] == '%')
      count += ft_putchar(test[i]);
    if(test[i] == '%')
    {
      count += printer(test[++i], va);
    }
    else
      count += ft_putchar(test[i]);
    i++;
  }
  return count;
}

