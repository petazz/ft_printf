/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:32:39 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/24 17:45:23 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	ft_len(long number)
{
	int	len;

	len = 1;
	if (number < 0)
	{
		number *= -1;
		len++;
	}
	while (number > 9)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	nbr;
	int	c;

	c = ft_len(n);
	nbr = n;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar('-');
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
	}
	return (c);
}
