/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:09:18 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/03 11:46:21 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_rectangular(char *file)
{
	int		fd;
	int		i;
	int		j;

	fd = open(file, O_RDONLY);
	i = ft_strlen(get_next_line(fd));
	j = file_linecount(file);
	if (i == j)
		null_error("Map is a square, hence not a rectangle");
	close(fd);
	return ;
}

void	ft_check_mapsymmetry(char *file)
{
	char	buffer[1024];
	int		numcols;
	int		readcount;
	int		fd;
	int		pos;

	numcols = -1;
	fd = open(file, O_RDONLY);
	readcount = read(fd, buffer, sizeof(buffer));
	if (readcount > 0)
	{
		pos = 0;
		while (pos < readcount && buffer[pos] != '\n')
			pos++;
		numcols = pos;
	}
	while (readcount > 0)
	{
		pos = 0;
		while (pos < readcount && buffer[pos] != '\n')
		pos++;
		if (pos != numcols)
			null_error_wfile("Error: Lines have different lengths\n", fd);
		readcount = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return ;
}

void	ft_check_presence(char *file)
{
	char	buffer[1024];
	int		readcount;
	int		fd;

	fd = open(file, O_RDONLY);
	if (!fd)
		null_error_wfile("Could not open file", fd);
	readcount = read(fd, buffer, sizeof(buffer));
	if (readcount <= 0)
		null_error_wfile("Error: Empty file", fd);
	else
		return ;
}

void	ft_checks(char *file)
{
	ft_check_presence(file);
	ft_check_rectangular(file);
	ft_check_mapsymmetry(file);
	return ;
}
