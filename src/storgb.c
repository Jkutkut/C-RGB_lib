/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:55:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 20:06:03 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief
 *
 *
 * @returns 0x00000000 if invalid
 */
int	storgb(char *color_str)
{
	size_t	c_len;
	int		color;
	char	c;
	int		semibyte;

	c_len = ft_strlen(color_str);
	if (!is_rgb_str(color_str))
		return (0);
	color = 0;
	semibyte = 8;
	color_str += 2;
	while (*color_str)
	{
		c = ft_hextoc(*color_str);
		if (c == INVALID)
			return (0);
		color |= c << semibyte--;
		color_str++;
	}
	return (color);
}
