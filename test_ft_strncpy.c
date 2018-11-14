/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:39:23 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 07:55:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_dst1[7][7] =
{
	"abcdef",
	"abcdef",
	"abcdef",
	"abcdef",
	"abcdef"
};

static char		g_dst2[7][7] =
{
	"abcdef",
	"abcdef",
	"abcdef",
	"abcdef",
	"abcdef"
};

static const char	*g_srcs[] =
{
	"",
	"abc",
	"abc",
	"\n",
	"0",
	NULL
};

static int g_lens[9] =
{
	5,
	3,
	1,
	1,
	0,
	0
};

double			ft_strncpy_test(void)
{
	size_t		s[2];
	double		grade;
	long double	success;
	char		*r;
	char		*exp;

	*s = 0;
	success = 0;
	printf(KYEL"testing ft_strncpy()... "KGRN);
	while (g_srcs[*s])
	{
		s[1] = strlen(g_dst1[*s]);
		exp = strncpy(g_dst1[*s], g_srcs[*s], g_lens[*s]);
		r = ft_strncpy(g_dst2[*s], g_srcs[*s], g_lens[*s]);
		if (r == g_dst2[*s] && strcmp(exp, r) == 0 && memcmp(exp, r, s[1]) == 0)
			success++;
		else
			printf(KRED"\n\tERROR expected %p = \"%s\" but got %p = \"%s\"",
				(void *)g_dst2[*s], g_dst1[*s], (void *)r, r);
		(*s)++;
	}
	if ((grade = (success / ((long double)*s))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
