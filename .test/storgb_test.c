/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:48:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 19:57:43 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rgblib.h"

#define OK "\033[1;32m[OK]\033[0m"
#define KO "\033[1;31m[KO]\033[0m"

void	storgb_test(char *color, int spected)
{
	char	*result;

	result = KO;
	if (storgb(color) == spected)
		result = OK;
	printf("Color: %s -> %08x %s\n", color, spected, result);
}

int	main(void)
{
	storgb_test("0x01", 0x01000000);
	return (0);
}