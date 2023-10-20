/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:50:23 by pgonzal2          #+#    #+#             */
/*   Updated: 2023/10/20 19:56:31 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>


int	ft_format(char type, va_list element)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(element, int));
	else if (type == 's')
		count += ft_putstr(va_arg(element, char *));
	else if (type == 'p')
		count += ft_putnbr_base(va_arg(element, void *));
	else if (type == 'd')
		count += ft_putnbr(va_arg(element, int));
	else if (type == 'i')
		count += ft_putnbr(va_arg(element, int));
	else if (type == 'u')
		count += ft_putnbr(va_arg(element, unsigned int));
	else if (type == 'x')
		count += ft_putnbr_x(va_arg(element, unsigned long));
	else if (type == 'X')
		count += ft_putnbr_HEX(va_arg(element, unsigned long));
	else
		count += ft_putchar(type);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	element;
	int		i;
	int		count;

	va_start(element, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == "%")
			count += ft_format(format[i++], element);
		i++;
	}
	va_end(element);
	return (count);
}

int main(void)
{
	ft_printf("%d, %x, %c, %%", 42, 8445, 'A');
}
