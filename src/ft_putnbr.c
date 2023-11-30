/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:22:06 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/29 16:17:56 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putnbr(int n, int *counter)
{
	char	*dbase;

	dbase = "0123456789";
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		*counter += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		*counter += 1;
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, counter);
	ft_putchar(dbase[n % 10]);
	*counter += 1;
}
