/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgblib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:54:04 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 19:24:52 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RGBLIB_H
#define RGBLIB_H

# define INVALID -1

// Tools
size_t	ft_strlen(const char *s);
char	ft_hextoc(char c);

int	is_rgb_str(char *str);
int	storgb(char *color_str);

#endif
