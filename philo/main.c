/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/18 16:54:48 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long	current_timestamp(void)
{
	struct timeval	te;
	long long		milliseconds;

	gettimeofday(&te, NULL);
	milliseconds = te.tv_sec * 1000LL + te.tv_usec / 1000;
	return (milliseconds);
}

void	*ft_routine(void *philo)
{
	t_philo	*ph;

	ph = (t_philo *)philo;
	while (1)
	{
		if (ph->id % 2)
			usleep(30000);
		printf("%ld %d has taken a fork\n", current_timestamp(), ph->id);
		pthread_mutex_lock(&ph->fork);
		printf("%ld %d is eating\n", current_timestamp(), ph->id);
		printf("%ld %d is sleeping\n", current_timestamp(), ph->id);
		printf("%ld %d is thinking\n", current_timestamp(), ph->id);
	}
}

void	philo_init(t_data *data, int i)
{
	data->philo[i].id = i + 1;
	pthread_mutex_init(&data->philo[i].fork, NULL);
	data->philo[i].back = data;
}

void	ft_create_life(t_data *data)
{
	int	i;

	i = 0;
	data->philo = (t_philo *)malloc(sizeof(t_philo) * data->numphilo);
	while (i < data->numphilo)
	{
		pthread_create(&data->philo[i].philo, NULL,
			&ft_routine, (void *)&data->philo[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	rules;

	rules.numeat = -1;
	check_args(argc, argv);
	if (argc == 6)
		rules.numeat = ft_atoi(argv[5]);
	if (argc != 5)
		exit (printf("Error bad input"));
	rules.numphilo = ft_atoi(argv[1]);
	rules.time_to_die = ft_atoi(argv[2]);
	rules.time_to_eat = ft_atoi(argv[3]);
	rules.time_to_sleep = ft_atoi(argv[4]);
	ft_create_life(&rules);
	return (0);
}
