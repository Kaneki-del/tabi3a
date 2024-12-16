#include <unistd.h>

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}

int	ft_putnbr(int nb)
{
  int count;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else
		count += ft_putchar(nb + 48);
  return count;
}



int ft_putstr(char *str) {
  int i;

  i = 0;
  while (str[i]) {
    write(1, &str[i], 1);
    i++;
  }
  return i;
}
