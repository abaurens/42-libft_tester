/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:20:47 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 14:10:32 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char	*g_values[8][2] =
{
	{"test1", "test1"},
	{"test1", "test12"},
	{"test1", "test2"},
	{"test1", ""},
	{"", "test1"},
	{"test2", "test1"},
	{"test12", "test1"},
	{NULL, NULL}
};

static char		test(const char *s1, const char *s2, char target)
{
	int			res;

	if ((res = ft_strequ(s1, s2)) == target)
		return (1);
	printf(KRED"\n\tERROR expected %d (\"%s\" == \"%s\") but got %d",
	target, s1, s2, res);
	return (0);
}

double				ft_strequ_test(void)
{
	size_t			i;
	double			grade;
	long double		success;

	i = 0;
	success = 0;
	printf(KYEL"testing ft_strequ()... "KNRM);
	while (g_values[i][0])
	{
		success += test(g_values[i][0], g_values[i][1], i == 0);
		i++;
	}
	if ((grade = (success / (long double)i)) >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
