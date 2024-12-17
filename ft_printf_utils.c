#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}

void	ft_putnbr(int n, int fd)
{
	long	nb;

	if (fd < 0)
		return ;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		nb = nb % 10;
	}
	ft_putchar(nb % 10 + '0');
}

int ft_putstr(char *str) {
  int i = 0;

  if (!str)
  	i += ft_putstr("(null)");
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

int printp(unsigned long h)
	{
	int lent = 0;
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
