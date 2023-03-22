/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:20 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/22 15:15:22 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		stack->stack_b[i] = 0;
		i++;
	}
}

int	ft_smallest(t_stack *stack)
{
	int	smallest;
	int	i;

	i = 0;
	smallest = 2147483647;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < smallest)
		{
			smallest = stack->stack_a[i];
		}
		i++;
	}
	return (smallest);
}

int	ft_biggest(t_stack *stack)
{
	int	biggest;
	int	i;

	i = 0;
	biggest = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] > biggest)
		{
			biggest = stack->stack_a[i];
		}
		i++;
	}
	return (biggest);
}

void	ft_is_ordered(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < stack->stack_a[i - 1])
			return ;
		i++;
	}
	exit(write(1, "Tutto ordinato\n", 15));
}
