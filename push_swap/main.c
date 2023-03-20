/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:34:57 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/20 16:54:43 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		exit(write(1, "Error\n", 6));
	i = 0;
	while (argv[++i])
	{
		if (ft_atoi(argv[i]) < -2147483648
			|| ft_atoi(argv[i]) > 2147483647)
			exit(write(1, "Error\n", 6));
	}
}

void	ft_size_count1(t_stack *stack, char **temp1)
{
	int	i;

	i = -1;
	while (temp1[++i])
	{
		if (ft_atoi(temp1[i]) == 0 && temp1[i][0] != '0')
			exit(write(1, "Error\nft_sizecount1\n", 20));
		stack->stack_a[i] = ft_atoi(temp1[i]);
		free(temp1[i]);
	}
}

void	ft_size_count(int argc, char **argv, t_stack *stack)
{
	int		i;
	char	*temp;
	char	**temp1;

	i = 0;
	temp = (char *) malloc (sizeof(char));
	temp[0] = 0;
	while (++i < argc)
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, " ");
	}
	temp1 = ft_split(temp, 32);
	free(temp);
	stack->size_a = i - 1;
	stack->size_l = stack->size_a;
	stack->stack_a = (int *) malloc (stack->size_a * sizeof(int));
	ft_size_count1(stack, temp1);
	free(temp1);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	printf("start\n");
	check_arg(argc, argv);
	ft_size_count(argc, argv, &stack);
	stack.size_b = 0;
	stack.stack_b = malloc(sizeof(int) * stack.size_a);
	printf("finish\n");
}
