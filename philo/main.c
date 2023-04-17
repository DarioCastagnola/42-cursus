/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/17 16:57:26 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	check_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i != 5)
	{
		if (ft_atoi(argv[i] <= 0))
			exit (printf("bad input\n"));
		++i;
	}
}

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

long long current_timestamp()
{
    struct timeval te; 
    gettimeofday(&te, NULL);
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000;
    return (milliseconds);
}

void	*ft_routine(void *philo)
{
	printf("%ld %d is eating", current_timestamp(), philo.id);
	
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.numeat = -1;
	check_args(argc, argv);
	if (argc == 6)
		data.numeat = ft_atoi(argv[5]);
	if (argc != 5)
		exit (printf("Error bad input"));
	data.numphilo = ft_atoi(argv[1]);
	data.time_to_die = ft_atoi(argv[2]);
	data.time_to_eat = ft_atoi(argv[3]);
	data.time_to_sleep = ft_atoi(argv[4]);
	ft_create_life(&data);
	return (0);
}
