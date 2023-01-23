/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:32:07 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/23 14:43:14 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}
