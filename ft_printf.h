/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:58:08 by sait-nac          #+#    #+#             */
/*   Updated: 2024/12/17 15:58:09 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_putnbr(int nb);
int	printp(unsigned long h);
int	ft_putchar(char c);
int	put_hexa(unsigned int h, char size);
int	ft_printf(const char *test, ...);
int	ft_putstr(char *str);
int	ft_put_unsign_int(unsigned int nb);

#endif
