/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:48:37 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/28 10:03:30 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (str != NULL)
	{
		while (str[i])
			i += ft_putchar(str[i]);
	}
	else
		i += write (1, "(null)", 6);
	return (i);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
