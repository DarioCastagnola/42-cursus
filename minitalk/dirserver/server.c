/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:23:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/13 16:58:57 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_pow(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * ft_pow(base, exp - 1));
}

void	decoder(int signal, siginfo_t *info, void *pu)
{
	static int				bit;
	static int				c;

	(void)pu;
	(void)info;
	if (signal == SIGUSR1)
		c += ft_pow(2, bit);
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	act;

	pid = getpid();
	ft_printf("%s%d\n%s", GREEN, pid, END);
	act.sa_sigaction = decoder;
	act.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&act.sa_mask);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (42)
		pause();
}
