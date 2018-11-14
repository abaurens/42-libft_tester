/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:43:55 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 14:54:18 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char g_src[127] = "Chaine de test assez longue histoire de tester un \
peu si le malloc passe bien et d'eviter les mallocs de taille fixe geants...\n";

static const char *g_res = "Dibjof ef uftu bttfa mpohvf ijtupjsf ef uftufs vo \
qfv tj mf nbmmpd qbttf cjfo fu e'fwjufs mft nbmmpdt ef ubjmmf gjyf hfbout...\n";

static void	func(char *c)
{
	if (*c == 'z')
		*c = 'a';
	else if (*c == 'Z')
		*c = 'A';
	else if (isalpha(*c))
		*c += 1;
}

double		ft_striter_test(void)
{
	double	grade;

	grade = 1.0;
	printf(KYEL"testing ft_striter()... "KNRM);
	ft_striter((char *)g_src, func);
	if (strcmp(g_res, g_src))
	{
		printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"", g_res, g_src);
		grade = 0.0;
	}
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
