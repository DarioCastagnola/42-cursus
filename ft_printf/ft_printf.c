/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:02:10 by dcastagn          #+#    #+#             */
/*   Updated: 2023/02/02 16:51:30 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *src, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	va_start(ptr, src);
	i = 0;
	count = 0;
	if (!src)
	{
		write (1, "(NULL)", 6);
		return (6);
	}		
	while (src[i])
	{
		if (src[i] == '%')
		{
			i++;
			ft_putsrc(src[i], ptr);
		}
		else
			ft_putchar(src[i]);
		i++;
	}
	return (count);
}

int	main(void)

{
	char	b;
	int		s;
	char	str[] = "Every poo poo time is pee pee time but not every pee pee time is poo poo time";

	s = 42;
	b = 'P';
	ft_printf("wq%%wq%cwq%dwq%swq", b, s, str);
}
