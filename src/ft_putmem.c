/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:06 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/29 17:58:32 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

static void	putmem(t_uintptr p, int *counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (p > 15)
		putmem(p / 16, counter);
	write(1, &base[p % 16], 1);
	*counter += 1;
}

int	ft_putmem(void *p)
{
	t_uintptr	ptr;
	int			r;

	r = 0;
	if (!p)
		r = ft_putstr("(nil)");
	else
	{
		ptr = (t_uintptr)p;
		r += ft_putstr("0x");
		putmem(ptr, &r);
	}
	return (r);
}
