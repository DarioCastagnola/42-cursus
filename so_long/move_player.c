/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:43:12 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/09 10:08:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player_up(t_game *game, int x, int y)
{
	if (game->map[y - 1][x] != '1')
	{
		if (game->map[y - 1][x] == 'C')
			(game->numchimes)--;
		else if (game->map[y - 1][x] == 'E' && game->end == 0)
			return ;
		else if (game->map[y - 1][x] == 'E' && game->end == 1)
			exit(1);
		game->bard = game->bard_u;
		game->map[y][x] = '0';
		game->map[y - 1][x] = 'P';
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->bard_u,
			(x) * 64, ((y - 1) * 64));
	}
}

void	move_player_down(t_game *game, int x, int y)
{
	if (game->map[y + 1][x] != '1')
	{
		if (game->map[y + 1][x] == 'C')
			(game->numchimes)--;
		else if (game->map[y + 1][x] == 'E' && game->end == 0)
			return ;
		else if (game->map[y + 1][x] == 'E' && game->end == 1)
			exit(1);
		game->bard = game->bard_d;
		game->map[y][x] = '0';
		game->map[y + 1][x] = 'P';
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->bard_d,
			(x) * 64, ((y + 1) * 64));
	}
}

void	move_player_left(t_game *game, int x, int y)
{
	if (game->map[y][x - 1] != '1')
	{
		if (game->map[y][x - 1] == 'C')
			(game->numchimes)--;
		else if (game->map[y][x - 1] == 'E' && game->end == 0)
			return ;
		else if (game->map[y][x - 1] == 'E' && game->end == 1)
			exit(1);
		game->bard = game->bard_l;
		game->map[y][x] = '0';
		game->map[y][x - 1] = 'P';
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->bard_l,
			(x - 1) * 64, ((y) * 64));
	}
}

void	move_player_right(t_game *game, int x, int y)
{
	if (game->map[y][x + 1] != '1')
	{
		if (game->map[y][x + 1] == 'C')
			(game->numchimes)--;
		else if (game->map[y][x + 1] == 'E' && game->end == 0)
			return ;
		else if (game->map[y][x + 1] == 'E' && game->end == 1)
			exit(1);
		game->bard = game->bard_r;
		game->map[y][x] = '0';
		game->map[y][x + 1] = 'P';
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->bard_r,
			(x + 1) * 64, ((y) * 64));
	}
}

int	key_hook(int key, t_game *game)
{
	locate_player(game);
	set_chimes(game);
	ft_printf("%d\n", game->numchimes);
	if (key == KEY_RIGHT || key == KEY_D)
		move_player_right(game, game->bardx, game->bardy);
	if (key == KEY_UP || key == KEY_W)
		move_player_up(game, game->bardx, game->bardy);
	if (key == KEY_DOWN || key == KEY_S)
		move_player_down(game, game->bardx, game->bardy);
	if (key == KEY_LEFT || key == KEY_A)
		move_player_left(game, game->bardx, game->bardy);
	if (key == KEY_ESC)
	{
		mlx_destroy_window(game->mlx, game->mlx_win);
		exit (0);
	}
	if (game->numchimes == 0)
		draw_exit(game);
	return (0);
}
