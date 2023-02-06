/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:02:10 by dcastagn          #+#    #+#             */
/*   Updated: 2023/02/06 12:49:13 by dcastagn         ###   ########.fr       */
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
	while (src[i])
	{
		if (src[i] == '%')
		{
			i++;
			ft_putsrc(src[i], &count, ptr);
		}
		else
			ft_putchar(src[i], &count);
		i++;
	}
	return (count);
}

int	main(void)

{
	char			b;
	int				s, c;
	unsigned int	m;
	char			str[] = "Every poo poo time is pee pee time but not every pee pee time is poo poo time";
	int				w;

	s = 42;
	m = 2121212123;
	b = 'P';
	w = 196;
	c = ft_printf("wq%%wq%cwq%dwq%swq%uwq%xwq%Xwq\n", b, s, str, m, w, w);
	ft_printf("%d \n", c);
	c = printf("wq%%wq%cwq%dwq%swq%uwq%xwq%Xwq\n", b, s, str, m, w, w);
	printf("%d \n", c);
}
