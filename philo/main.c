/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/20 12:39:39 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long	current_timestamp(void)
{
	struct timeval	tv;
	long long		ms_time;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec) * 1000 + (tv.tv_usec) / 1000);
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
	data->philo = (t_philo *)malloc(sizeof(t_philo)
			* data->number_of_philosophers);
	while (i < data->number_of_philosophers)
	{
		pthread_create(&data->philo[i].philo, NULL,
			&ft_routine, (void *)&data->philo[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	rules;

	if (argc < 5 || argc > 6)
		return (printf("Error bad input\n"));
	if (check_args(argc, argv))
		return (printf("Invalid Input\n"));
	if (init(argc, argv, &rules))
		return (printf("you have exceeded the max/min int value\n"));
	return (0);
}
