/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:18:54 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 15:20:08 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_src = "Chaine de test assez cool !";

static const char *g_res = "est assez coo";

double	ft_strsub_test(void)
{
	char	*ptr;
	double	grade;

	grade = 1.0;
	printf(KYEL"testing ft_strsub()... "KNRM);
	if (strcmp(g_res, (ptr = ft_strsub(g_src, 11, 13))))
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
