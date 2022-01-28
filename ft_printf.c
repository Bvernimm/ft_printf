/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:59:55 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/28 09:53:01 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvar(char c, va_list ap)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789"));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'c')
		return (ft_putchar((char)va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr((char *)va_arg(ap, int *)));
	if (c == 'p')
	{	
		write (1, "0x", 2);
		return (ft_putunll_base(va_arg(ap, unsigned long long int),
				"0123456789abcdef") + 2);
	}
	if (c == 'u')
		return (ft_putun_base(va_arg(ap, unsigned int), "0123456789"));
	if (c == 'x')
		return (ft_putun_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_putun_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_putvar((char)str[i + 1], ap);
			i += 2;
		}
		else
		{
			count += write (1, &str[i], 1);
			i++;
		}
	}
	va_end(ap);
	return (count);
}
