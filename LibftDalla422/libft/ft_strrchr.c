/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:23:42 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/18 16:42:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	size++;
	while ((s[size] != (char)c) && (size >= 0))
	{
		size--;
	}
	if (c == '\0')
		return ((char *)&s[size]);
	if (size < 0)
		return (NULL);
	return ((char *)&s[size]);
}
