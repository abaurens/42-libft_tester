/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:20:06 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 11:20:22 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\
0123456789!#{$%^&*(_+=-~`)}\"'\\/.><?;:[]";

double	ft_memchr_test(void)
{
	char			*expected;
	char			*result;
	unsigned char	c;
	double			grade;
	long double		success;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_memchr()... "KNRM);
	while (c < 255)
	{
		expected = memchr(g_s, c, 91);
		if (expected == (result = ft_memchr(g_s, c, 91)))
			success++;
		else
			printf(KRED"\n\tERROR expected %p = \"%s\" but got %p = \"%s\"\n",
				(void *)expected, expected, (void *)result, result);
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
