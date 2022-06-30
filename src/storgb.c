/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:55:52 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 23:11:21 by jre-gonz         ###   ########.fr       */
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
		c = ft_hextoc(*color_str);
		//c = (char) 2;
		if (c == INVALID)
			return (0);
		color += c << (semibyte * 4);
		semibyte--;
		color_str++;
	}
	return (color);
}
