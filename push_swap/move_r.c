/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:09:52 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/17 16:53:02 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = 0;
	temp = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = temp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = 0;
	temp = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = temp;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack, int flag)
{
	ra(stack, 0);
	rb(stack, 0);
	if (flag)
		write(1, "rr\n", 3);
}
