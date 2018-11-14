/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnequ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:52:49 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/13 18:29:51 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char	*g_vls[17][4] =
{
	{"test1", "test1", (char *)5, (char *)1},
	{"test1", "test1", (char *)0, (char *)1},
	{"test1", "test12", (char *)5, (char *)1},
	{"test1", "test2", (char *)3, (char *)1},
	{"test2", "test1", (char *)3, (char *)1},
	{"test12", "test1", (char *)2, (char *)1},
	{"abcd", "zxyw", (char *)0, (char *)1},
	{"test1", "", (char *)0, (char *)1},
	{"", "test1", (char *)0, (char *)1},
	{"test1", "test12", (char *)6, (char *)0},
	{"test1", "test2", (char *)5, (char *)0},
	{"test1", "", (char *)1, (char *)0},
	{"", "test1", (char *)1, (char *)0},
	{"test2", "test1", (char *)5, (char *)0},
	{"test12", "test1", (char *)6, (char *)0},
	{"test", "tests", (char *)6, (char *)0},
	{NULL, NULL, NULL}
};

static char		test(const char *s1, const char *s2, size_t l, char target)
{
	int			res;

	if ((res = ft_strnequ(s1, s2, l)) == target)
		return (1);
	printf(KRED"\n\tERROR expected %d (\"%s\" == \"%s\")(%lu) but got %d",
	target, s1, s2, l, res);
	return (0);
}

double	ft_strnequ_test(void)
{
	size_t			i;
	double			grade;
	long double		success;

	i = 0;
	success = 0;
	printf(KYEL"testing ft_strnequ()... "KNRM);
	while (g_vls[i][0])
	{
		success += test(g_vls[i][0], g_vls[i][1], (size_t)g_vls[i][2], (char)g_vls[i][3]);
		i++;
	}
	if ((grade = (success / (long double)i)) >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
