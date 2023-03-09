/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:43:42 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/09 10:50:31 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_exit(t_game *game)
{
	locate_door(game);
	ft_printf("door y = %d", game->door_y);
	ft_printf("door x = %d", game->door_x);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->floor,
		game->imgx, game->imgy);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->door_open_img,
		(game->door_x) * 64, ((game->door_y) * 64));
	game->end = 1;
}

int	locate_door(t_game *game)
{
	int		i;
	size_t	j;

	i = 0;
	while (i < get_y(game->map))
	{
		j = 0;
		while (j < ft_strlen(game->map[0]))
		{
			if (game->map[i][j] == 'E')
			{
				game->door_y = i;
				game->door_x = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
