#include <stdio.h>
#include <string.h>
#include <libc.h>
#include "ft_printf.h"
int main()
{
 
 int i = ft_printf("NULL %s NULL ", NULL);
 //t_printf("NULL %s NULL ", NULL);
 printf("%d", i);
}
