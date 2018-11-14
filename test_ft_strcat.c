/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 06:45:46 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 07:48:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_dest1[7][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static char		g_dest2[7][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static const char	*g_srcs[] =
{
	"",
	"\0",
	"def",
	"defg",
	"0",
	NULL
};

double			ft_strcat_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strcat()... "KNRM);
	while (g_srcs[c])
	{
		expected = strcat(g_dest1[c], g_srcs[c]);
		result = ft_strcat(g_dest2[c], g_srcs[c]);
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
