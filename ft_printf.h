/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgonzal2 <pgonzal2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:57:39 by usuario           #+#    #+#             */
/*   Updated: 2023/10/24 17:54:15 by pgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr_he(unsigned int nbr);
int	ft_putnbr_x(unsigned long nbr);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_p(unsigned long p);

#endif
