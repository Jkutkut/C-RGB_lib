/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rgba.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:48:33 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/04 18:06:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief Get the red component of the rgba color.
 * 
 * @param rgba
 * @return int Integer with the value of the color channel.
 */
int	get_r(int rgba)
{
	return ((rgba >> 24) & 0xFF);
}

/**
 * @brief Get the green component of the rgba color.
 * 
 * @param rgba
 * @return int Integer with the value of the color channel.
 */
int	get_g(int rgba)
{
	return ((rgba >> 16) & 0xFF);
}

/**
 * @brief Get the blue component of the rgba color.
 * 
 * @param rgba
 * @return int Integer with the value of the color channel.
 */
int	get_b(int rgba)
{
	return ((rgba >> 8) & 0xFF);
}

/**
 * @brief Get the alpha component of the rgba color.
 * 
 * @param rgba
 * @return int Integer with the value of the color channel.
 */
int	get_a(int rgba)
{
	return (rgba & 0xFF);
}

/**
 * @brief Obtains the rgba color from the given arguments.
 * 
 * All parameters are spected to be in the range [0x00, 0xFF].
 * 
 * @param r Red channel.
 * @param g Green channel.
 * @param b Blue channel.
 * @param a Alpha channel.
 * 
 * @return int Color result of the union of the channels.
 */
int get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}