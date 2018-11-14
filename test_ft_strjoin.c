/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:18:19 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 15:22:26 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_src1 = "Chaine de test assez cool !";

static const char *g_src2 = "Une autre.";

static const char *g_res = "Chaine de test assez cool !Une autre.";

double	ft_strjoin_test(void)
{
	char	*ptr;
	double	grade;

	grade = 1.0;
	printf(KYEL"testing ft_strjoin()... "KNRM);
	if (strcmp(g_res, (ptr = ft_strjoin(g_src1, g_src2))))
	{
		printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"", g_res, ptr);
		grade = 0.0;
	}
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
