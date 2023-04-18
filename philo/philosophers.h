/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:52 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/18 14:56:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <pthread.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>
# define NC	"\e[0m"
# define YELLOW	"\e[1;33m"

typedef struct s_data
{
	int		numphilo;
	int		time_to_die;
	int		time_to_sleep;
	int		time_to_eat;
	int		numeat;
	t_philo	*philo;
}	t_data;

typedef struct s_philo
{
	pthread_mutex_t	fork;
	pthread_t		philo;
	t_data			*back;
	int				id;
}	t_philo;

int	ft_atoi(const char *str);

#endif
