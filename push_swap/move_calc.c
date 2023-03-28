/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:14:54 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/27 16:25:36 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_max(int *stack, int size, int *min, int *max)
{
	int		i;

	i = 0;
	*min = stack[0];
	*max = stack[0];
	while (i < size)
	{
		if (stack[i] < *min)
			*min = stack[i];
		else if (stack[i] > *max)
			*max = stack[i];
		i++;
	}
}
