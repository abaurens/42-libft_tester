/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:33:25 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 08:37:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_dest1[11][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static char		g_dest2[11][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static const char	*g_srcs[] =
{
	"",
	"",
	"\0",
	"\0",
	"def",
	"def",
	"defg",
	"defg",
	"0",
	"0",
	NULL
};

static int g_lens[11] =
{
	4,
	0,
	2,
	0,
	7,
	2,
	4,
	1,
	1,
	0,
	0
};

double			ft_strncat_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strncat()... "KNRM);
	while (g_srcs[c])
	{
		expected = strncat(g_dest1[c], g_srcs[c], g_lens[c]);
		result = ft_strncat(g_dest2[c], g_srcs[c], g_lens[c]);
		if (result == g_dest2[c] && strcmp(expected, result) == 0)
			success++;
		else
			printf(KRED"\n\tERROR expected %p = \"%s\" but got %p = \"%s\"",
				(void *)g_dest2[c], g_dest1[c], (void *)result, result);
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
