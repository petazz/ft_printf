/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:36:09 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/22 07:10:00 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned long nbr)
{
	unsigned long n;
	int c;

	c = 0;
	n = nbr;
	while(n != 0)
	{
		n = n / 10;
		c++;
	}
	if (nbr >= 16)
	{
		ft_putnbr_x((nbr / 16));
		ft_putnbr_x(nbr % 16);
	}
	if (nbr <= 9)
		ft_putchar((nbr % 10) + '0');
	else if (nbr < 16 && nbr > 9)
		ft_putchar(nbr - 10 + 'a');
	return (c);
}

