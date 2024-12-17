#include "ft_printf.h"
#include <stdio.h>
int main()
{
  char *str = "testkl";
  char *ptr = str;
  int i =printf("the original: %p\n", ptr);
   int j = ft_printf("myn is :%p", ptr);
  printf("lent of original %d, lent of myn %d", i, j);
}
