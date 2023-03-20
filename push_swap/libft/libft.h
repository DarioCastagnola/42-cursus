/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:18:37 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/20 16:41:19 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

long			ft_atoi(const char *str);
char			**ft_split(char const *s, char c);
size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
