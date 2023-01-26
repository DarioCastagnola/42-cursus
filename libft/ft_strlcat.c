/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:20:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/24 15:23:29 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	if (!dst && !dstsize)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (dstsize == 0)
		return (len_src);
	while (src[j] && j + len_dst < dstsize - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
		dst[i] = 0;
	if (len_dst >= dstsize)
		len_dst = dstsize;
	return (len_dst + len_src);
}
