/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:33:15 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/28 15:35:03 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	sort_5(t_stack *stack)
{
	pb(stack, 1);
	pb(stack, 1);
	ft_sort_three(stack);
	pa(stack, 1);
	if (!ft_is_ordered(stack)) //ordinamento quarto numero
	{
		if (stack->stack_a[0] > stack->stack_a[1]
			&& stack->stack_a[0] < stack->stack_a[2])
			sa(stack, 1);
		if (stack->stack_a[0] > stack->stack_a[3])
			ra(stack, 1);
		if (stack->stack_a[0] > stack->stack_a[2]
			&& stack->stack_a[0] < stack->stack_a[3])
		{
			rra(stack, 1);
			sa(stack, 1);
			ra(stack, 1);
			ra(stack, 1);
		}
	}
	pa(stack, 1);
	if (!ft_is_ordered(stack)) //ordinamento quinto numero
	{
		if (stack->stack_a[0] > stack->stack_a[1]
			&& stack->stack_a[0] < stack->stack_a[2])
			sa(stack, 1);
		if (stack->stack_a[0] > ft_biggest(stack))
			ra(stack, 1);
	}
}
*/
void	ascend(t_stack *stack)
{
	int	i;

	i = -1;
	while (stack->stack_a[++i] != ft_smallest(stack))
		;
	if (i > (stack->size_a / 2))
	{
		while (stack->stack_a[0] != ft_smallest(stack))
			rra(stack, 1);
	}
	if (i <= stack->size_a / 2)
	{
		while (stack->stack_a[0] != ft_smallest(stack))
			ra(stack, 1);
	}
}

void	push_all_b(t_stack *stack)
{
	if (stack->size_a == 3)
		ft_sort_three(stack);
	if (stack->size_a == 2)
		ft_sort_two(stack);
	if (stack->size_a == 5)
		ft_sort_five(stack);
	else
		ft_big_push(stack);
}

void	ft_big_push(t_stack *stack)
