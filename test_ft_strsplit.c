/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:22:21 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 15:27:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

const char *g_src = "*salut*les***etudiants*";

const char *g_tab[4] =
{
	"salut",
	"les",
	"etudiants",
	NULL
};

double		ft_strsplit_test(void)
{
	int		i;
	char	**ptr;
	double	grade;

	i = -1;
	grade = 1.0;
	printf(KYEL"testing ft_strsplit()... "KNRM);
	if (!(ptr = ft_strsplit(g_src, '*')))
		return (0.5);
	while (g_tab[++i])
		if (strcmp(g_tab[i], ptr[i]))
		{
			printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"",
			g_tab[i], ptr[i]);
			grade = 0.0;
		}
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
