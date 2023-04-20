/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:46:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/20 14:10:01 by dcastagn         ###   ########.fr       */
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

int	init_philo(t_data *rules)
{
	
}
