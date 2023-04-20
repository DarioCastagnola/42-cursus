/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:46:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/20 16:54:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	init(int argc, char **argv, t_data *rules)
{
	rules->number_of_philosophers = ft_atoi(argv[1]);
	rules->time_to_die = ft_atoi(argv[2]);
	rules->time_to_eat = ft_atoi(argv[3]);
	rules->time_to_sleep = ft_atoi(argv[4]);
	rules->eating_done_count = 0;
	rules->death = 0;
	if (argc == 6)
		rules->must_eat = ft_atoi(argv[5]);
	else
		rules->must_eat = 0;
	if (rules->number_of_philosophers == -1
		|| rules->time_to_die == -1
		|| rules->time_to_eat == -1
		|| rules->time_to_sleep == -1
		|| rules->must_eat == -1)
		return (1);
	return (0);
}

void	init_philo_and_mutex(t_data *rules)
{
	int	i;
	
	i = -1;
	data->philo = (t_philo *)malloc(sizeof(t_philo)
			* data->number_of_philosophers);
	while (++i < rules->number_of_philosophers)
		pthread_mutex_init(&rules->fork[i], NULL);
		pthread_mutex_init(&philosophers_info->mutex_print, NULL);
}

void	init_philos_data(t_data *rules)
{
	int	i;
	
	i = -1;
	while (++i < rules->number_of_philosophers)
	{
		ft_bzero(&rules->philo[i], sizeof(t_philo));
		rules->philo[i].id = i + 1;
		rules->philo[i].rules = &rules;
		rules->philo[i].mutex_print = &rules->mutex_print;
		rules->philo[i].left_fork = &rules->fork[i];
		rules->philo[i].right_fork
			= &rules->fork[(i + 1) % rules->number_of_philosophers];
	}
}

void	init_thread(t_data *rules)
{
	int			i;
	long long	public_time;

	i = -1;
	public_time = ft_current_time();
	while (++i < rules->number_of_philosophers)
	{
		rules->philo[i].public_time = public_time;
		rules->philo[i].eating_start_time = ft_current_time;
		pthread_create(&rules->philo[i].philot, NULL,
			(void *)routine, &rules->philo[i]);
		usleep(200);
	}
	i = -1;
	while (++i < rules->number_of_philosophers)
	{
		pthread_join(rules->philo[i].philot, NULL);
	}
}