/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:33:15 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/30 16:00:23 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_big_push(t_stack *stack)
{
	int	i;
	int	j;

	j = 0;
	while (stack->size_a > 3)
	{
		while (stack->stack_a[0] == stack->size_l - j && stack->size_a > 3)
		{
			pb(stack, 1);
			j++;
		}
		rra(stack, 1);
	}
	ft_sort_three(stack);
	i = 1;
	while (stack->stack_b[0] == stack->size_l - j + i)
	{
		pa(stack, 1);
		ra(stack, 1);
		i++;
	}
	while (stack->stack_a[0] != 1)
		ra(stack, 1);
}
*/
int	ft_binlen(int n)
{
	int	i;

	i = 0;
	while (++i && n)
		n /= 2;
	return (i);
}

void	ft_big_push(t_stack *stack)
{
	int	i;
	int	k;
	int	c;

	k = -1;
	c = ft_binlen(stack->size_a);
	while (++k < c - 1)
	{
		i = stack->size_a;
		while (--i >= 0)
		{
			if ((stack->stack_a[0] >> k) % 2 == 1)
				ra(stack, 1);
			else
				pb(stack, 1);
		}
		while (stack->size_b > 0)
			pa(stack, 1);
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
