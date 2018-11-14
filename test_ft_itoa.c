/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:53:42 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 13:13:52 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "tester.h"

static const t_data g_data[] =
{
	{0, "0"},
	{1, "1"},
	{-1, "-1"},
	{-32, "-32"},
	{+42, "42"},
	{-42, "-42"},
	{4242, "4242"},
	{-4242, "-4242"},
	{+10050, "10050"},
	{2147483647, "2147483647"},
	{-2147483647, "-2147483647"},
	{-2147483648, "-2147483648"},
	{0, NULL}
};

double			ft_itoa_test(void)
{
	int			i;
	char		*res;
	double		grade;
	long double	success;

	i = -1;
	success = 0;
	printf(KYEL"testing ft_itoa()... "KNRM);
	while (g_data[++i].target)
	{
		if (!(res = ft_itoa(g_data[i].v)))
			continue;
		if (strcmp(res, g_data[i].target) == 0)
			success++;
		else
			printf(KRED"\n\tERROR expected \"%s\" but got \"%s\"",
				g_data[i].target, res);
	}
	grade = (success / ((long double)i));
	if (grade >= 1.0)
		printf(KGRN);
	else
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
