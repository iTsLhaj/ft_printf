/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:26:46 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/29 16:19:36 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_putunb(unsigned int n, int *counter)
{
	char	*dbase;

	dbase = "0123456789";
	if (n > 9)
		ft_putunb(n / 10, counter);
	ft_putchar(dbase[n % 10]);
	*counter += 1;
}
