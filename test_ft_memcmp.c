/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:25:48 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/13 18:04:18 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char *g_tab[11] =
{
	"test",
	"test",
	"test1",
	"test1",
	"test1",
	"test",
	"",
	"test1",
	"\xff\xaa\xde\x12",
	"zyxbcdefgh",
	NULL
};

static char *g_tab2[11] =
{
	"test",
	"test",
	"test2",
	"test2",
	"test",
	"test2",
	"test2",
	"",
	"\xff\xaa\xde\x12MACOSAAAAA",
	"abcdefgxyz",
	NULL
};

static int g_lens[11] =
{
	4,
	8,
	0,
	5,
	5,
	5,
	5,
	5,
	4,
	0,
	0
};

double	ft_memcmp_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	int			result;
	int			expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_memcmp()... "KNRM);
	while (g_tab[c])
	{
		expected = memcmp(g_tab[c], g_tab2[c], g_lens[c]);
		if (expected == (result = ft_memcmp(g_tab[c], g_tab2[c], g_lens[c])))
			success++;
		else
		{
			printf(KRED"\n\tERROR expected %d (\"%s\" == \"%s\")(%d) but got %d", expected, g_tab[c], g_tab2[c], g_lens[c], result);
		}
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
