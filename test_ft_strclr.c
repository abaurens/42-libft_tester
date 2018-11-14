/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:33:45 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 14:40:10 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char	g_tab[] = "Cette chaine sers de test";
static char	g_emp[26];

double	ft_strclr_test(void)
{
	double			grade;

	grade = 1.0;
	printf(KYEL"testing ft_strclr()... "KNRM);
	ft_strclr(g_tab);
	bzero(g_emp, 26);
	if (memcmp(g_tab, g_emp, 25))
	{
		printf(KRED"\n\tERROR bytes are not fully copied or are wrongs.");
		grade = 0.0;
	}
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
