/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:58:08 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 18:04:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

#include <stdlib.h>

static char g_s[] = "abcdefghijklmnopqrstuvwxyz";

static char g_s2[] = "abcdefghijklmnopqrstuvwxyz";

static const char *g_src = "string with\200inside !";

double	ft_memccpy_test(void)
{
	int			c;
	double		grade;
	long double	success;
	char		*res;
	char		*exp;

	c = -2;
	success = 0;
	printf(KYEL"testing ft_memccpy()... "KNRM);
	while (++c < 255)
	{
		exp = memccpy(g_s2, g_src, c, 21);
		res = ft_memccpy(g_s, g_src, c, 21);
		if (memcmp(g_s, g_s2, 21) == 0)
			success++;
		else
			printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"", exp, res);
	}
	printf(KGRN);
	if ((grade = (success / ((long double)(c + 1)))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
