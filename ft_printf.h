/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:48:48 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/28 09:46:44 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
int		ft_putvar(char c, va_list ap);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr_base(int nb, char *base);
int		ft_putun_base(unsigned int nb, char *base);
int		ft_putunll_base(unsigned long long int nb, char *base);

#endif
