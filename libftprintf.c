/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:41:01 by hmouhib           #+#    #+#             */
/*   Updated: 2023/12/04 18:18:53 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	print(char *buffer, va_list lst)
{
	int	result;

	result = 0;
	if (*buffer == 'c')
		result += ft_putchar(va_arg(lst, int));
	else if (*buffer == 's')
		result += ft_putstr(va_arg(lst, char *));
	else if (*buffer == 'p')
		result += ft_putmem(va_arg(lst, void *));
	else if (*buffer == 'd' || *buffer == 'i')
		ft_putnbr(va_arg(lst, int), &result);
	else if (*buffer == 'u')
		ft_putunb(va_arg(lst, unsigned int), &result);
	else if (*buffer == 'x' || *buffer == 'X')
	{
		if (*buffer == 'X')
			ft_puthex(va_arg(lst, unsigned int), 1, &result);
		else
			ft_puthex(va_arg(lst, unsigned int), 0, &result);
	}
	else
		result += ft_putchar(*buffer);
	return (result);
}

int	ft_printf(char *buffer, ...)
{
	va_list	lst;
	int		r;

	r = 0;
	if (!buffer)
		return (--r);
	va_start(lst, buffer);
	while (*buffer)
	{
		if (*buffer == '%')
		{
			buffer++;
			r += print(buffer, lst);
		}
		else
		{
			ft_putchar(*buffer);
			r++;
		}
		buffer++;
	}
	va_end(lst);
	return (r);
}
