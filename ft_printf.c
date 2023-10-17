/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:50:23 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/17 15:14:21 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list element;
	va_start(element, str);
	int i;

	i = 0;
	while (str)
	{
		if (str[i] == "%")
		{
			if (str[i + 1] == 'c')
				return (ft_putchar(va_arg(element, int)));
			else if (str[i + 1] == 's')
				return (ft_putstr(va_arg(element, char *)));
			else if (str[i + 1] == 'p')
				return (ft_putnbr_base(va_arg(element, )));
			else if (str[i + 1] == 'd')
				return (ft_putnbr(va_arg(element, int)));
			else if (str[i + 1] == 'i')
				return (ft_putnbr(va_arg(element, int)));
			else if (str[i + 1] == 'u')
				return (ft_putnbr_10(va_arg(element, unsigned int)));
			else if (str[i + 1] == 'x')
				return (ft_putnbr_base(va_arg(element, unsigned int)));
			else if (str[i + 1] == 'X')
				return (ft_putnbr_10(va_arg(element, unsigned int)));
			else if (str[i + 1] == '%')
				return (ft_putnbr_10(va_arg(element, unsigned int)));
		}
	}
