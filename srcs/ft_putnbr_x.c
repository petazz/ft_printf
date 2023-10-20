/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:36:09 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/20 16:44:19 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_HEX(unsigned long nbr)
{
	if (nbr >= 16)
	{
		ft_putnbr_base((nbr / 16));
		ft_putnbr_base(nbr % 16);
	}
	if (nbr <= 9)
		ft_putchar((nbr % 10) + '0');
	else if (nbr < 16 && nbr > 9)
		ft_putchar(nbr - 10 + 'a');
}

