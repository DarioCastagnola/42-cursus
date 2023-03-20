/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:15:41 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/20 11:01:57 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = stack->size_a - 1;
	temp = stack->stack_a[i];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = temp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = stack->size_b - 1;
	temp = stack->stack_b[i];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = temp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack, int flag)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (flag)
		write(1, "rrr\n", 4);
}
