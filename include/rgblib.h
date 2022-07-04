/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgblib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:54:04 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/04 18:01:06 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RGBLIB_H
#define RGBLIB_H

#include <stddef.h>

# define INVALID -1

# define INVALID_COLOR 0x00000000

// Tools
size_t	ft_strlen(const char *s);
int		ft_hextoi(char c);

// get_rgba

int	get_r(int rgba);
int	get_g(int rgba);
int	get_b(int rgba);
int	get_a(int rgba);


int		is_rgb_str(char *str);
int		storgb(char *color_str);

#endif
