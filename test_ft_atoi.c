/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 05:32:51 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/13 18:00:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char	*g_tests[15] =
{
	"0",
	"1",
	"-1",
	"+42",
	"-42",
	"\t\n \v\v\f \v\r4242"
	"\t\n \v\v \f\v\r-4242",
	"+10b50",
	"++-+-32",
	"2147483647",
	"-2147483647",
	"-2147483648",
	"99999999999999999999999999",
	"-99999999999999999999999999",
	NULL
};

double				ft_atoi_test(void)
{
	size_t			c;
	double			grade;
	long double		success;
	int				result;
	int				expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_atoi()... "KNRM);
	while (g_tests[c])
	{
		expected = atoi(g_tests[c]);
		if (expected == (result = ft_atoi(g_tests[c])))
			success++;
		else
			printf(KRED"\n\tERROR(%s) expected %d but got %d", g_tests[c], expected, result);
		c++;
	}
	grade = (success / ((long double)c));
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
