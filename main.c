#include <stdio.h>
#include "ft_printf.h"

int main()
{
 unsigned int test = 0x1F4B2D9C;
 printf("%X\n", test);
 ft_printf("%X", test);
}
