/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:01:04 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 15:02:45 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char *g_src = "Chaine de test assez longue histoire de tester un \
peu si le malloc passe bien et d'eviter les mallocs de taille fixe geants...\n";

static const char *g_res = "Dibjof ef uftu bttfa mpohvf ijtupjsf ef uftufs vo \
qfv tj mf nbmmpd qbttf cjfo fu e'fwjufs mft nbmmpdt ef ubjmmf gjyf hfbout...\n";

static char	func(unsigned int i, char c)
{
	(void)i;
	if (c == 'z')
		return ('a');
	if (c == 'Z')
		return ('A');
	if (isalpha(c))
		return (c + 1);
	return (c);
}

double		ft_strmapi_test(void)
{
	double	grade;
	char	*res;

	grade = 1.0;
	printf(KYEL"testing ft_strmapi()... "KNRM);
	res = ft_strmapi(g_src, func);
	if (strcmp(g_res, res))
	{
		printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"", g_res, res);
		grade = 0.0;
	}
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
