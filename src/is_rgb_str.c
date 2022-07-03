/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rgb_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:11:27 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/03 12:06:13 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief Checks if the given string represents a valid RGBa color.
 * It should follow any of the given formats:
 * 
 * 	0xRR
 * 	0xRRGG
 * 	0xRRGGBB
 * 	0xRRGGBBAA
 *
 * @param str String with the color.
 *
 * @returns 1 if the color is valid, 0 otherwise.
 */
int	is_rgb_str(char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	if (len < 2 + 2 || len > 8 + 2 || len % 2 != 0)
		return (0);
	if (str[0] != '0' || str[1] != 'x')
		return (0);
	str += 2;
	while (*str)
	{
		if (ft_hextoi(*str) == INVALID)
			return (0);
		str++;
	}
	return (1);
}
