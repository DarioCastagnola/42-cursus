/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:20:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/19 16:55:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (len_dst < size - 1 && size > 0)
	{
		while (src[j] && len_dst + j < size - 1)
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = 0;
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_dst + len_src);
}