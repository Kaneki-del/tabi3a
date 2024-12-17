#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}

void	ft_putnbr(int n)
{
	long	long_n;

	int lent = 0;
	long_n = n;
	if (long_n < 0)
	{
		lent += ft_putchar('-');
		long_n *= -1;
	}
	if (long_n >= 0 && long_n < 10)
		lent += ft_putchar((long_n + '0'));
	else
	{
		ft_putnbr(long_n / 10);
		lent += ft_putchar(((long_n % 10) + '0'));
	}
}

int ft_putstr(char *str) {
  int i = 0;

  if (!str)
  	return i += ft_putstr("(null)");
  i = 0;
  while (str[i]) {
    write(1, &str[i], 1);
    i++;
  }
  return i;
}
int put_hexa(unsigned int h, char size)
{
	int lent = 0;
	char str[16] = "0123456789abcdef"; 
	if (h >= 16)
	{
		lent += put_hexa((h / 16), size);
		lent += put_hexa((h % 16), size);
	}
	else
	{
		if (h <= 9)
			lent += ft_putchar(str[h]);
		else
		{
			if (size == 'x')
				lent += ft_putchar(h - 10 + 'a');
			if (size == 'X')
				lent += ft_putchar(h - 10 + 'A');
		}
	}
	return lent;
}

int printp(size_t h)
	{
	int lent = 0;
	lent += ft_putstr("0x");
	char str[16] = "0123456789abcdef"; 
	if (h >= 16)
	{
		lent += printp((h / 16));
		lent += printp((h % 16));
	}
	else if (h < 16)
		lent += ft_putchar(str[h]);
	return lent;
}
