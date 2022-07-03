/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgblib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:54:04 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/03 12:05:58 by jre-gonz         ###   ########.fr       */
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

int		is_rgb_str(char *str);
int		storgb(char *color_str);

#endif
