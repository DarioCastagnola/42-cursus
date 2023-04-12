/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:19:49 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/12 17:44:51 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	sigint_handler(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("\n%sSignal Captured\n%s", GREEN, END);
	else if (signal == SIGUSR2)
		ft_printf("\n%sSignal Captured\n%s", GREEN, END);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	num;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

void	ft_atob(char c, int pid)
{
	int	bit;

	bit = -1;
	while (++bit < 8)
	{
		if (c & 128)
		{
			if (kill(pid, SIGUSR2) == -1)
				exit(ft_printf("%sError\n%s", RED, END));
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				exit(ft_printf("%sError\n%s", RED, END));
		}
		c <<= 1;
		pause();
		usleep(100);
	}
}

void	send_text(char *str, int pid)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_atob(str[i], pid);
	ft_atob('\0', pid);
}

int	main(int argc, char **argv)
{
	int					server_pid;
	struct sigaction	sa;

	if (argc != 3)
		exit(ft_printf("%sBad input;\n./ <pid> <text>%s\n", RED, END));
	else
	{
		if ((argv[1][0] == '-' && argv[1][1] == '1' &&
		!argv[1][2]) || argv[1][0] == '0' && !argv[1][1])
			exit(ft_printf("%sBad input;\npid is invalid\n%s", RED, END));
		sigemptyset(&sa.sa_mask);
		sa.sa_handler = &sigint_handler;
		sigaction(SIGUSR1, &sa, NULL);
		server_pid = ft_atoi(argv[1]);
		send_text(argv[2], server_pid);
	}
	return (0);
}
