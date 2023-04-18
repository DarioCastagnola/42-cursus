/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:07:41 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/18 16:49:25 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	num;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

void	check_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i != 5)
	{
		if (ft_atoi(argv[i] <= 0))
			exit (printf("bad input\n"));
		++i;
	}
}
