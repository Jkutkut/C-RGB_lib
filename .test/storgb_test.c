/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storgb_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:48:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/07/03 11:35:32 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib_test.h"


void	storgb_test(char *color, int spected)
{
	char	*result;

	result = RED KO NC;
	if (storgb(color) == spected)
		result = GREEN OK NC;
	printf("Color: %11s -> %s%08x%s (%08x) %s\n", color, YELLOW, storgb(color), NC, spected, result);
}

void	storgb_tester(void)
{
	printf("\n**************  " YELLOW "storgb" NC "  **************\n");
	printf("\nTest " YELLOW "valid" NC "\n");
	storgb_test(      "0x01", 0x01000000);
	storgb_test(      "0x0f", 0x0f000000);
	storgb_test(      "0xf0", 0xf0000000);
	storgb_test(    "0xf000", 0xf0000000);
	storgb_test(  "0xf00000", 0xf0000000);
	storgb_test("0xf0000000", 0xf0000000);
	storgb_test("0xffffffff", 0xffffffff);
	storgb_test("0xfcfcfcfc", 0xfcfcfcfc);
	storgb_test("0x12345678", 0x12345678);
	storgb_test(    "0xf0f0", 0xf0f00000);
	storgb_test(    "0x12cb", 0x12cb0000);
	storgb_test(  "0xf0c0ab", 0xf0c0ab00);
	storgb_test(  "0xabcdef", 0xabcdef00);
	storgb_test("0x89abcdef", 0x89abcdef);
	
	printf("\nTest " YELLOW "invalid" NC "\n");
	storgb_test(         NULL, INVALID_COLOR);
	storgb_test(           "", INVALID_COLOR);
	storgb_test(          "0", INVALID_COLOR);
	storgb_test(         "0X", INVALID_COLOR);
	storgb_test(        "0x0", INVALID_COLOR);
	storgb_test(        "0xq", INVALID_COLOR);
	storgb_test(      "0x12q", INVALID_COLOR);
	storgb_test(       "0a12", INVALID_COLOR);
	storgb_test(       "ax12", INVALID_COLOR);
	storgb_test(       "0X12", INVALID_COLOR);
	storgb_test("0x000000000", INVALID_COLOR);
	storgb_test("0x00000000q", INVALID_COLOR);
	printf("\n****************************\n");
}
