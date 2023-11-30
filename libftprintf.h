/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:42:42 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/29 18:00:00 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/*
 *  a simple remake of the printf function from libc
 *  without implementing baffuer management of the original
 *  only handling these formats -> cspdiuxX%
 */

# include <unistd.h>
# include <stdarg.h>

typedef unsigned long long	t_uintptr;
typedef enum e_bool {
	FALSE,
	TRUE
}	t_bool;

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putmem(void *p);
void	ft_putnbr(int n, int *counter);
void	ft_putunb(unsigned int n, int *counter);
void	ft_puthex(unsigned int n, t_bool up, int *counter);

int		ft_printf(char *buffer, ...);

#endif
