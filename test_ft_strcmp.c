/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:04:49 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 07:18:55 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char *g_tab[7] =
{
	"test",
	"test1",
	"test1",
	"test",
	"",
	"test1",
	NULL
};

static char *g_tab2[7] =
{
	"test",
	"test2",
	"test",
	"test2",
	"test2",
	"",
	NULL
};

double			ft_strcmp_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	int			result;
	int			expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strcmp()... "KNRM);
	while (g_tab[c])
	{
		expected = strcmp(g_tab[c], g_tab2[c]);
		if (expected == (result = ft_strcmp(g_tab[c], g_tab2[c])))
			success++;
		else
			printf(KRED"\n\tERROR expected %d but got %d", expected, result);
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
