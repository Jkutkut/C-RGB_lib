/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:18:03 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/03 12:07:18 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief Obtains the value in decimal of the char in hexadecimal given.
 * 
 * Example: if c = 'a', ft_hextoc(c) == 10
 * 
 * @param c character with the value in hexadecimal.
 * 
 * @returns The correct value or INVALID if input is not hexadecimal.
 */
int	ft_hextoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a') + 10;
	if (c >= 'A' && c <= 'F')
		return (c - 'A') + 10;
	return (INVALID);
}
