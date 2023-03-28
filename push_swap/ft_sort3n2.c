/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3n2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:35:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/28 12:05:38 by dcastagn         ###   ########.fr       */
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
		&& ft_smallest(stack) == stack->stack_a[2])
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	if (ft_biggest(stack) == stack->stack_a[0]
		&& ft_smallest(stack) == stack->stack_a[1])
		ra(stack, 1);
	if (ft_smallest(stack) == stack->stack_a[1]
		&& ft_biggest(stack) == stack->stack_a[2])
		sa(stack, 1);
	if (ft_biggest(stack) == stack->stack_a[1]
		&& ft_smallest(stack) == stack->stack_a[2])
		rra(stack, 1);
}

void	ft_sort_two(t_stack *stack)
{
	if (ft_smallest(stack) != stack->stack_a[0])
		sa(stack, 1);
}

void	ft_sort_five(t_stack *stack)
{
	while (stack->size_a > stack->size_l - 2)
	{
		while (stack->stack_a[0] == 4 || stack->stack_a[0] == 5)
			pb(stack, 1);
		ra(stack, 1);
	}
	ft_sort_three(stack);
	if (stack->stack_b[0] == 5)
	{
		pa(stack, 1);
		pa(stack, 1);
		ra(stack, 1);
		ra(stack, 1);
		return ;
	}
	pa(stack, 1);
	ra(stack, 1);
	pa(stack, 1);
	ra(stack, 1);
}
