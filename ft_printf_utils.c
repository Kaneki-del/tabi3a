#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}
int	ft_putnbr(int n)
{
	long	nb;
	int numbers = 0;
	nb = n;
	if (nb < 0)
	{
		numbers += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		numbers += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	numbers += ft_putchar(nb % 10 + '0');
	return (numbers);
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
int ft_put_unsign_int(unsigned int nb)
{
	int numbers = 0;
	if (nb >= 0 && nb < 10)
		numbers += ft_putchar(nb + '0');
	else
	{
		numbers += ft_putnbr(nb / 10);
		numbers += ft_putchar((nb % 10) + '0');
	}
	return (numbers);
}
