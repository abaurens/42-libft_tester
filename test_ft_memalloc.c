/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:20:35 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 12:39:35 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "tester.h"

static double	return_grade(const long double success, const size_t s)
{
	double		grade;

	printf(KGRN);
	if ((grade = (success / ((long double)(s - 1)))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}

double			ft_memalloc_test(void)
{
	size_t		s;
	long double	success;
	char		*result;
	char		*expected;

	s = 0;
	success = 0;
	printf(KYEL"testing ft_memalloc()... "KNRM);
	while (++s < 2000)
	{
		if (!(expected = malloc(s)))
			continue;
		if (!(result = ft_memalloc(s)))
		{
			free(expected);
			continue;
		}
		if (memcmp(memset(expected, 0, s), result, s) == 0)
			success++;
		else
			printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
		free(expected);
		free(result);
	}
	return (return_grade(success, s));
}
