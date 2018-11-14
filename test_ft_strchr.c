/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:58:15 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 09:11:19 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\
0123456789!#{$%^&*(_+=-~`)}\"'\\/.><?;:[]";

double	ft_strchr_test(void)
{
	char			*expected;
	char			*result;
	unsigned char	c;
	double			grade;
	long double		success;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strchr()... "KNRM);
	while (c < 255)
	{
		expected = strchr(g_s, c);
		if (expected == (result = ft_strchr(g_s, c)))
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
