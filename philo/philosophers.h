/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:52 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/20 16:28:30 by dcastagn         ###   ########.fr       */
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
	int		number_of_philosophers;
	int		time_to_die;
	int		time_to_sleep;
	int		time_to_eat;
	int		eating_done_count;
	int		must_eat;
	int		death;
	t_philo	*philo;
}	t_data;

typedef struct s_philo
{
	pthread_mutex_t	fork;
	pthread_t		philot;
	t_data			*rules;
	pthread_mutex_t	*mutex_print;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	long long		public_time;
	int				id;
	long long		eating_start_time;
	long long		starve_time;
}	t_philo;

int	ft_atoi(const char *str);

#endif
