/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:23:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/12 18:46:02 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_pow(int base, int exp)
{
	if (exp == 7)
		return (1);
	return (base * ft_pow(base, exp + 1));
}

void	decoder(int signal)
{
	static int				bit;
	static unsigned char	c;

	bit = -1;
	if (++bit < 7)
	{
		if (signal == SIGUSR1)
			;
		else if (signal == SIGUSR2)
		{
			c += ft_pow(2, bit);
		}
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	act;

	pid = getpid();
	sigemptyset(&act.sa_mask);
	act.sa_handler = &decoder;
	act.sa_flags = SA_SIGINFO;
	ft_printf("%s%d\n%s", GREEN, pid, END);
}
