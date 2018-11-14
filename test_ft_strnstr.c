/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:58:41 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 18:21:34 by abaurens         ###   ########.fr       */
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
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"Chaine de test bateau histoire d'avoir de quoi travailler.",
	"MZIRIBMZIRIBMZE123",
	NULL
};

static const char	*g_tf[] =
{
	"",
	"",
	"de ",
	"de ",
	"histoire",
	"histoire",
	"de q",
	"de q",
	"lol",
	"lol",
	"MZIRIBMZE",
	NULL
};

static int g_lens[12] =
{
	3,
	0,
	100,
	1,
	9,
	5,
	5,
	0,
	3,
	2,
	9,
	0
};

double	ft_strnstr_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	char		*result;
	char		*expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strnstr()... "KNRM);
	while (g_src[c])
	{
		expected = strnstr(g_src[c], g_tf[c], g_lens[c]);
		if (expected == (result = ft_strnstr(g_src[c], g_tf[c], g_lens[c])))
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
