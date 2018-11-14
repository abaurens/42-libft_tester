/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 05:09:45 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 05:10:08 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

double	ft_isalnum_test(void)
{
	unsigned char	c;
	double			grade;
	long double		success;
	long double		test_count;

	c = 0;
	success = 0;
	test_count = 0;
	printf(KYEL"testing ft_isalnum()... "KNRM);
	while (c < 255)
	{
		test_count++;
		if (isalnum(c) == ft_isalnum(c))
			success++;
		c++;
	}
	grade = (success / test_count);
	if (grade > 0.33)
		printf(grade >= 1.00 ? KGRN : KYEL);
	else
		printf(KRED);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
	return (0.0);
}
