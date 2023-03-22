/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3n2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:35:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/22 14:37:20 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *stack)
{
	if (ft_smallest(stack) == stack->stack_a[0]
		&& ft_biggest(stack) == stack->stack_a[1])
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	if (ft_biggest(stack) == stack->stack_a[0]
		&& ft_smallest(stack) == stack->stack_a[stack->size_a])
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	if (ft_biggest(stack) == stack->stack_a[0]
		&& ft_smallest(stack) == stack->stack_a[1])
		ra(stack, 1);
	if (ft_smallest(stack) == stack->stack_a[1]
		&& ft_biggest(stack) == stack->stack_a[stack->size_a])
		sa(stack, 1);
	if (ft_biggest(stack) == stack->stack_a[1]
		&& ft_smallest(stack) == stack->stack_a[stack->size_a])
		rra(stack, 1);
	exit (1);
}

void	ft_sort_two(t_stack *stack)
{
	if (ft_smallest(stack) != stack->stack_a[0])
		sa(stack, 1);
	exit (1);
}
