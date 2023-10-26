/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:52:01 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/24 17:48:21 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long p)
{
	int	c;

	c = 0;
	if (!p)
	{
		ft_putstr("0x0");
		return (3);
	}
	else
	{
		ft_putstr("0x");
		c = 2 + ft_putnbr_x(p);
	}
	return (c);
}
