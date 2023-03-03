/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:45:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/03 11:42:24 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game		game;
	t_vectors	v;
	int			i;

	(void)argc;
	i = 0;
	game.mlx = mlx_init();
	ft_checks(argv[1]);
	game.mlx_win = mlx_new_window(game.mlx,
			ft_strlen_file(argv[1]) * 64,
			file_linecount(argv[1]) * 64, "so_long");
	mlx_key_hook(game.mlx_win, key_hook, &game);
	game.floor = mlx_xpm_file_to_image(game.mlx,
			"xpm/river.xpm", &game.img_width, &game.img_height);
	game.wall = mlx_xpm_file_to_image(game.mlx,
			"xpm/bush.xpm", &game.img_width, &game.img_height);
	while (i <= 1080)
	{
		v.x = 0;
		v.y = 0;
		while (v.x <= ft_strlen_file(argv[1]) * 64
			|| v.y <= file_linecount(argv[1]) * 64)
		{
			mlx_put_image_to_window(game.mlx, game.mlx_win, game.floor, v.x, i);
			v.x += 64;
			mlx_put_image_to_window(game.mlx, game.mlx_win, game.floor, i, v.y);
			v.y += 64;
		}
		i += 64;
	}
	mlx_loop(game.mlx);
}

int	key_hook(int keycode, t_game *game)
{
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(game->mlx, game->mlx_win);
		exit (0);
	}
	return (0);
}

/*	mlx_hook(game.mlx_win, 17, 0, ft_terminate, &game); */