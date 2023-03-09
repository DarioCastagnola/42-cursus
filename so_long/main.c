/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:45:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/09 12:42:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game		game;
//	int			i;
	//int			j;
	if (argc != 2)
		null_error("Wrong Input!!");
	game.end = 0;
	game.player_moves = 0;
	game.mlx = mlx_init();
	game.map = read_map(argv[1]);
	/*	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 13)
		{
			ft_printf("%c ", game.map[i][j]);
			j++;
		}
		ft_printf("\n");
		i++;
	}
	*/
	is_valid_map(game.map);
	game.mlx_win = mlx_new_window(game.mlx,
			ft_strlen_file(argv[1]) * 64,
			file_linecount(argv[1]) * 64, "so_long");
	mlx_key_hook(game.mlx_win, key_hook, &game);
	img_init(&game);
	draw_map(&game);
	print_moves(&game);
	mlx_loop(game.mlx);
}

/*	mlx_hook(game.mlx_win, 17, 0, ft_terminate, &game); */