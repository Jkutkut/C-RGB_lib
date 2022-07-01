/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:55:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/01 09:10:21 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief Attempts to get the color given by input.
 * It should follow any of the given formats:
 * 
 * 	0xRR
 * 	0xRRGG
 * 	0xRRGGBB
 * 	0xRRGGBBAA
 *
 * @param color_str String with the color.
 *
 * @returns The color as RGBa in hexadecimal or 0x00000000 if invalid.
 */
int	storgb(char *color_str)
{
	int		color;
	char	c;
	int		semibyte;

	if (!is_rgb_str(color_str))
		return (0);
	color = 0;
	semibyte = 7;
	color_str += 2;
	while (*color_str)
	{
		c = ft_hextoc(*color_str++);
		if (c == INVALID)
			return (0);
		color += c << (semibyte-- * 4);
	}
	return (color);
}
