/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:58:03 by sait-nac          #+#    #+#             */
/*   Updated: 2024/12/17 15:58:04 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	printer(char c, va_list va)
{
	int	count;

	count = 0;
	if (c == 's')
		count += ft_putstr(va_arg(va, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(va, int));
	else if (c == 'c')
		count += ft_putchar(va_arg(va, int));
	else if (c == 'u')
		count += ft_put_unsign_int(va_arg(va, int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += printp((unsigned long)va_arg(va, void *));
	}
	else if (c == 'x')
		count += put_hexa(va_arg(va, unsigned int), c);
	else if (c == 'X')
		count += put_hexa(va_arg(va, unsigned int), c);
	else if (c == '%')
		count += ft_putchar(c);
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *test, ...)
{
	va_list	va;
	int		i;
	int		count;

	va_start(va, test);
	i = 0;
	count = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (test[i])
	{
		if (test[i] == '%')
		{
			if (test[i + 1] == '\0')
				break ;
			count += printer(test[++i], va);
		}
		else
			count += ft_putchar(test[i]);
		i++;
	}
	va_end(va);
	return (count);
}
