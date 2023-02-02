/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsrc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:04:32 by dcastagn          #+#    #+#             */
/*   Updated: 2023/02/02 16:54:39 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putsrc(char c, va_list ptr)
{
	int	i;

	i = 0;
	if (c == '%')
		write(1, "%", 1);
	if (c == 'c')
		ft_putchar(va_arg(ptr, int));
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int));
	if (c == 's')
		ft_putstr(va_arg(ptr, char *));
}
