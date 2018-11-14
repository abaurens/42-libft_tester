/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:40:55 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 09:55:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_src = "Chaine de test assez longue histoire de tester un \
peu si le malloc passe bien et d'eviter les mallocs de taille fixe geants...\n";

double				ft_strdup_test(void)
{
	double			grade;
	char			*result;

	grade = 0.0;
	printf(KYEL"testing ft_strdup()... "KNRM);
	if ((result = ft_strdup(g_src)) == g_src)
		printf(KRED"\n\tERROR expected \"%p\" to be different from \"%p\"",
			(void *)result, (void *)g_src);
	else if (strcmp(result, g_src))
		printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"",
			g_src, result);
	else
		grade++;
	printf(KGRN);
	if (grade < 1.0)
		printf("\ngrade :"KRED);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
