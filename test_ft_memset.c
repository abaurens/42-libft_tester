/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:01:19 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 10:54:35 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_src[15];
static char		g_src2[15];

double			ft_memset_test(void)
{
	int			c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = -256;
	success = 0;
	printf(KYEL"testing ft_memset()... "KNRM);
	while (++c < 255)
	{
		expected = memset(g_src2, c, 15);
		if ((result = ft_memset(g_src, c, 15)) != g_src)
			printf(KRED"\n\tERROR expected \"%p\" to be equals to \"%p\"",
				(void *)result, (void *)g_src);
		else if (memcmp(result, expected, 15))
			printf(KRED"\n\tERROR bytes are not fully copied or are wrongs");
		else
			success++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)(c * 2)))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
