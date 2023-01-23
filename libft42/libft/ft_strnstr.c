/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:40:34 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/20 16:18:53 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = -1;
	if (!needle)
		return ((char *)haystack);
	while (++i < (len - 1) && haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && !needle[j])
		{
			i++;
			j++;
		}
	}
	return ((char *)&haystack[i - j]);
}
