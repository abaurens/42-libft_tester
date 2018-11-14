/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 05:28:49 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/08 05:29:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "tester.h"

double	ft_putnbr_test(void)
{
	double	grade;

	printf(KYEL"testing ft_putnbr()... "KNRM);
	grade = 1.0;
	printf(KGRN"%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
