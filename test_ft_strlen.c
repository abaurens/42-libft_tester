/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 05:59:20 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 06:02:28 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char	*g_tests[13] =
{
	"",
	"\0",
	"a",
	"0123456789",
	"This is a really beautiful string.",
	"lol"
	"this",
	"test",
	"is",
	"really\n",
	"\ttoo",
	"long\r...",
	NULL
};

double	ft_strlen_test(void)
{
	size_t			c;
	double			grade;
	long double		success;
	int				result;
	int				expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strlen()... "KNRM);
	while (g_tests[c])
	{
		expected = strlen(g_tests[c]);
		if (expected == (result = ft_strlen(g_tests[c])))
			success++;
		else
			printf(KRED"\n\tERROR expected %d but got %d", expected, result);
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
