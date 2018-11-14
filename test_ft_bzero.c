/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:51:09 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 14:40:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_src[15];
static char		g_src2[15];

double			ft_bzero_test(void)
{
	double		grade;

	grade = 0.0;
	printf(KYEL"testing ft_bzero()... "KNRM);
	bzero(g_src2, 15);
	ft_bzero(g_src, 15);
	if (memcmp(g_src, g_src2, 15))
		printf(KRED"\n\tERROR bytes are not fully copied or are wrongs");
	else
		grade++;
	printf(KGRN);
	if (grade < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
