/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunll_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:44:38 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/28 09:47:10 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunll_base(unsigned long long int nb, char *base)
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
