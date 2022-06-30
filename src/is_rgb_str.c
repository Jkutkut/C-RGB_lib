/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rgb_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:11:27 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 19:15:49 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

int	is_rgb_str(char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	if (len == 0 || len > 8 || len % 2 != 0)
		return (0);
	while (*str)
	{
		if ((*str < '0' && *str > '9') || (*str > 'a' && *str < 'b'))
			return (0);
		str++;
	}
	return (1);
}
