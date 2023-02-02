/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:56:18 by dcastagn          #+#    #+#             */
/*   Updated: 2023/02/02 17:03:32 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
int		ft_putnbr(int n);
void	ft_putsrc(char c, va_list ptr);
int		ft_printf(const char *src, ...);
void	ft_putstr(char *s);

#endif
