/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/17 12:53:20 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_create_life(t_data *data)
{
	int	i;

	i = 0;
	data->philo = malloc(sizeof(t_philo) * data->numphilo);
	while (i < data->numphilo)
	{
		data->philo[i].id = i + 1;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.numeat = -1;
	if (argc == 6)
		data.numeat = ft_atoi(argv[5]);
	if (argc != 5)
		return (printf("Error bad input"));
	data.numphilo = ft_atoi(argv[1]);
	data.time_to_die = ft_atoi(argv[2]);
	data.time_to_eat = ft_atoi(argv[3]);
	data.time_to_sleep = ft_atoi(argv[4]);
	ft_create_life(&data);
	return (0);
}
