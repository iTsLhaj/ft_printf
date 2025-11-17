/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:22:42 by hmouhib           #+#    #+#             */
/*   Updated: 2023/12/04 18:16:28 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

static int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	ft_puthex(unsigned int n, int up, int *counter)
{
	char	*hbase;
	char	c;

	hbase = "0123456789abcdef";
	c = 0;
	if (n > 15)
		ft_puthex(n / 16, up, counter);
	c = hbase[n % 16];
	if (up)
		c = ft_toupper(c);
	ft_putchar(c);
	*counter += 1;
}
