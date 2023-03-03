/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:43:19 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/03 11:42:17 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <mlx.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <fcntl.h>
# include <math.h>
# define BUFFER_SIZE 1
//Movements macros
# define KEY_W 13
# define KEY_S 1
# define KEY_D 2
# define KEY_A 0
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_RIGHT 124
# define KEY_LEFT 123
# define KEY_ESC 53

// ---------- TILES
typedef enum e_tiletype
{
	EMPTY = '0',
	WALL = '1',
	COLLECTABLE = 'C',
	PLAYER = 'P',
	EXIT = 'E',
	ENEMY = 'M',
	FOLLOWER = 'F'
}	t_tiletype;

typedef struct s_vectors
{
	int		x;
	int		y;
}	t_vectors;

typedef struct s_game
{
	void			*mlx;
	void			*mlx_win;
	int				og_collects;
	int				collects;
	int				moves;
	void			*wall;
	void			*door_open_img;
	void			*door_close_img;
	void			*floor;
	void			*bard_l;
	void			*bard_r;
	void			*bard_d;
	void			*bard_u;
	int				img_width;
	int				img_height;
}	t_game;

char		**read_map(char *file);
void		*null_error(char *message);
void		*null_error_wfile(char *message, int fd);
void		*null_error_freemap(char *message, int fd, char **map);
int			file_linecount(char *file);
int			key_hook(int keycode, t_game *game);
int			ft_strlen_file(char *file);
void		ft_check_rectangular(char *file);
void		ft_check_presence(char *file);
void		ft_checks(char *file);
//funzioni getnextline
char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*read_file(int fd, char *res);
char		*ft_line(char *buffer);
char		*ft_next(char *buffer);

#endif