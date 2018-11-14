/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:13:41 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 10:54:51 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_src1[16] = "0123456789abcdef";
static char		g_src2[16] = "0123456789abcdef";

double			ft_memmove_test(void)
{
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	success = 0;
	printf(KYEL"testing ft_memmove()... "KNRM);
	expected = memmove(g_src2, g_src2, 5);
	if ((result = ft_memmove(g_src1, g_src1, 5)) != g_src1)
		printf(KRED"\n\tERROR expected \"%p\" to be equals to \"%p\"",
			(void *)result, (void *)g_src1);
	else if (memcmp(result, expected, 16))
		printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
	else
		success++;
	expected = memmove(g_src2, g_src2 + 5, 5);
	if ((result = ft_memmove(g_src1, g_src1 + 5, 5)) != g_src1)
		printf(KRED"\n\tERROR expected \"%p\" to be equals to \"%p\"",
			(void *)result, (void *)g_src1);
	else if (memcmp(result, expected, 16))
		printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
	else
		success++;
	expected = memmove(g_src2 + 5, g_src2, 5);
	if ((result = ft_memmove(g_src1 + 5, g_src1, 5)) != (g_src1 + 5))
		printf(KRED"\n\tERROR expected \"%p\" to be equals to \"%p\"",
			(void *)result, (void *)g_src1);
	else if (memcmp(result, expected, 11))
		printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
	else
		success++;
	printf(KGRN);
	if ((grade = (success / 3.0)) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
