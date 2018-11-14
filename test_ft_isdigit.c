/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 04:22:50 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 05:06:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include "tester.h"

double				ft_isdigit_test(void)
{
	unsigned char	c;
	double			grade;
	long double		success;
	long double		test_count;

	c = 0;
	success = 0;
	test_count = 0;
	printf(KYEL"testing ft_isdigit()... "KNRM);
	while (c < 255)
	{
		test_count++;
		if (isdigit(c) == ft_isdigit(c))
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
}
