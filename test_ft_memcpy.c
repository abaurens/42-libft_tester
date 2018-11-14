/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:26:14 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 10:47:42 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char			g_src1[16] = "0123456789abcdef";
static char			g_src2[16] = "0123456789abcdef";

static const char	*g_src[20] =
{
	"abc",
	"abc",
	"abcdef",
	"abcdef",
	"",
	"",
	"t",
	"t",
	"0123456789abcdef",
	"0123456789abcdef",
	NULL
};

static const int	g_lens[] =
{
	3,
	1,
	10,
	0,
	5,
	0,
	1,
	0,
	15,
	0,
	0
};

double	ft_memcpy_test(void)
{
	int			c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = -1;
	success = 0;
	printf(KYEL"testing ft_memcpy()... "KNRM);
	while (g_src[++c])
	{
		expected = memcpy(g_src2, g_src[c], g_lens[c]);
		if ((result = ft_memcpy(g_src1, g_src[c], g_lens[c])) != g_src1)
			printf(KRED"\n\tERROR expected \"%p\" to be equals to \"%p\"",
			(void *)result, (void *)g_src1);
		else if (memcmp(result, expected, g_lens[c]))
			printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
		else
			success++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
