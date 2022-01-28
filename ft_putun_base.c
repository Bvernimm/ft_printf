/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:47:00 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/27 11:48:12 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putun_base(unsigned int nb, char *base)
{
	char	tab[100];
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (nb == 0)
	{
		ft_putchar(base[0]);
		len ++;
	}
	while (nb > 0)
	{
		tab[i] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
		i++;
	}
	i--;
	while (i >= 0)
	{
		len += ft_putchar((char)tab[i]);
		i--;
	}
	return (len);
}
