/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:18:03 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/01 09:16:32 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

/**
 * @brief Obtains the value in decimal of the char in hexadecimal given.
 * 
 * @param c character with the value in hexadecimal.
 * 
 * @returns The correct value or INVALID if input is not hexadecimal.
 */
char	ft_hextoc(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a') + 10;
	if (c >= 'A' && c <= 'F')
		return (c - 'A') + 10;
	return (INVALID);
}
