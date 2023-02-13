/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:33:07 by dcastagn          #+#    #+#             */
/*   Updated: 2023/02/13 15:46:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd[1042];
	char	*line;
	char	*line2;
	char	*line3;

	fd[0] = open("file_da_leggere.txt", O_RDONLY);
	fd[1] = open("file_da_leggere2.txt", O_RDONLY);
	fd[2] = open("file_da_leggere3.txt", O_RDONLY);
	printf("%d \n", fd[0]);
	printf("%d \n", fd[1]);
	printf("%d \n", fd[2]);
	while (1)
	{
		line = get_next_line(fd[0]);
		line2 = get_next_line(fd[1]);
		line3 = get_next_line(fd[2]);
		if (line == NULL && line2 == NULL && line3 == NULL)
			break ;
		printf("%s", line);
		printf("%s", line2);
		printf("%s\n", line3);
		free(line);
	}
	return (0);
}
