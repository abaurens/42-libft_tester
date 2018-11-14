/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 05:08:15 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 05:08:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

double	ft_isupper_test(void)
{
	unsigned char	c;
	double			grade;
	long double		success;
	long double		test_count;

	c = 0;
	success = 0;
	test_count = 0;
	printf(KYEL"testing ft_isupper()... "KNRM);
	while (c < 255)
	{
		test_count++;
		if (isupper(c) == ft_isupper(c))
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
