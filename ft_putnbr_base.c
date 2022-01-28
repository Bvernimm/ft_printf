/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:00:52 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/27 15:04:05 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nb, char *base)
{
	char	tab[100];
	int		len;
	int		i;
	long	nbr;

	i = 0;
	len = 0;
	if (nb == 0)
		len += ft_putchar(base[0]);
	nbr = nb;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		tab[i] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
		i++;
	}
	while (--i >= 0)
		len += ft_putchar((char)tab[i]);
	return (len);
}
