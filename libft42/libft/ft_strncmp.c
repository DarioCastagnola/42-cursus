/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:16:38 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/18 17:04:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
			break ;
	i++;
	}
	return (s1[i] - s2[i]);
}
