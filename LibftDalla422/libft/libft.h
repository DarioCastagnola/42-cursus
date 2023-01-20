/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:18:37 by dcastagn          #+#    #+#             */
/*   Updated: 2023/01/18 17:04:57 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *s);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
void				bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
