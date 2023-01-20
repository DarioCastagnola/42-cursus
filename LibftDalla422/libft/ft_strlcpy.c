/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:42:54 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/20 14:38:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)

{
	size_t	i;
	size_t	len_src;
	
	i = 0;
	len_src = ft_strlen(src);
	while (src[i] && (dstsize - 1) > i)
	{
		dst[i] = src[i];
		i++;
	}
		return (len_src);
}
 