/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:45:50 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/24 17:41:33 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	ft_len(long number)
{
	int	len;

	len = 1;
	while (number > 9)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	c;

	c = ft_len(n);
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (c);
}
