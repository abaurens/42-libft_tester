/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:43:25 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 12:53:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "tester.h"

double		ft_memdel_test(void)
{
	size_t	s;
	char	*ptr;
	double	grade;

	grade = 0.0;
	s = 2000000;
	printf(KYEL"testing ft_memdel()... "KNRM);
	while (!(ptr = (char *)malloc(s)))
		s -= 10;
	ft_memdel(((void **)&ptr));
	if (!ptr)
		grade = 1.0;
	if (grade >= 1.0)
		printf(KGRN);
	else
	{
		printf(KRED"\n\tERROR expected %p but got %p", NULL, (void *)ptr);
		printf("\ngrade :"KRED);
	}
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
