/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:09:04 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 15:13:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_src = "\n\t  \t\n   Chaine de test assez cool !\n \t \t\n";

static const char *g_res = "Chaine de test assez cool !";

double		ft_strtrim_test(void)
{
	char	*ptr;
	double	grade;

	grade = 1.0;
	printf(KYEL"testing ft_strtrim()... "KNRM);
	if (strcmp(g_res, (ptr = ft_strtrim(g_src))))
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
