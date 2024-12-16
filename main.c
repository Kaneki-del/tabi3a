#include <stdio.h>
#include "ft_printf.h"

int main()
{
 char *str = "hello";
  int i = 100;
  char *s = "yes";
  char c = 'P';
  ft_printf("%%",str, i, s, c);
}
