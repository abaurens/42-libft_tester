/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:20:11 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 07:20:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

double	ft_tolower_test(void)
{
	unsigned char	c;
	double			grade;
	long double		success;
	long double		test_count;

	c = 0;
	success = 0;
	test_count = 0;
	printf(KYEL"testing ft_tolower()... "KNRM);
	while (c < 255)
	{
		test_count++;
		if (tolower(c) == ft_tolower(c))
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
