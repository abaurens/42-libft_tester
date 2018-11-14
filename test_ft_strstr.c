/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:50:37 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 07:56:23 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

static const char	*g_src[] =
{
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	NULL
};

static const char	*g_tf[] =
{
	"",
	"de ",
	"histoire",
	"de q",
	"lol",
	NULL
};

double	ft_strstr_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strstr()... "KNRM);
	while (g_src[c])
	{
		expected = strstr(g_src[c], g_tf[c]);
		if (expected == (result = ft_strstr(g_src[c], g_tf[c])))
			success++;
		else
			printf(KRED"\n\tERROR expected %p = \"%s\" but got %p = \"%s\"",
				(void *)expected, expected, (void *)result, result);
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
