/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:48:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 22:49:41 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rgblib.h"

#define NC "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"

#define OK "[OK]"
#define KO "[KO]"

#define TEST 

void	storgb_test(char *color, int spected)
{
	char	*result;

	result = RED KO NC;
	if (storgb(color) == spected)
		result = GREEN OK NC;
	printf("Color: %s -> %s%d%s (%08x) %s\n", color, YELLOW, storgb(color), NC, spected, result);
}

int	main(void)
{
	printf("Test " YELLOW "invalid" NC "\n");
	storgb_test(NULL, 0x00000000);
	storgb_test("", 0x00000000);
	storgb_test("0", 0x00000000);
	storgb_test("0X", 0x00000000);
	storgb_test("0x0", 0x00000000);
	storgb_test("0xq", 0x00000000);
	storgb_test("0x12q", 0x00000000);
	storgb_test("0x000000000", 0x00000000);
	storgb_test("0x00000000q", 0x00000000);
	
	printf("Test " YELLOW "valid" NC "\n");
	storgb_test("0x01", 0x01000000);
	storgb_test("0x0f", 0x0f000000);
	storgb_test("0xf0", 0xf0000000);
	return (0);
}
