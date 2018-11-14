/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:08:19 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/14 15:59:32 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "tester.h"

int				main()
{
	long double x = 0;
	long double	grade = 0.0;

	grade += ft_isalpha_test(); x++;
	grade += ft_isdigit_test(); x++;
	grade += ft_isprint_test(); x++;
	grade += ft_isascii_test(); x++;
	grade += ft_isalnum_test(); x++;
	grade += ft_tolower_test(); x++;
	grade += ft_toupper_test(); x++;
	grade += ft_putnbr_test(); x++;
	grade += ft_putstr_test(); x++;
	grade += ft_putendl_test(); x++;
	grade += ft_putchar_test(); x++;
	grade += ft_putnbr_fd_test(); x++;
	grade += ft_putstr_fd_test(); x++;
	grade += ft_putendl_fd_test(); x++;
	grade += ft_putchar_fd_test(); x++;
	grade += ft_atoi_test(); x++;
	grade += ft_strlen_test(); x++;
	grade += ft_strchr_test(); x++;
	grade += ft_strrchr_test(); x++;
	grade += ft_strcat_test(); x++;
	grade += ft_strncat_test(); x++;
	grade += ft_strlcat_test(); x++;
	grade += ft_strcmp_test(); x++;
	grade += ft_strncmp_test(); x++;
	grade += ft_strcpy_test(); x++;
	grade += ft_strncpy_test(); x++;
	grade += ft_strstr_test(); x++;
	grade += ft_strnstr_test(); x++;
	grade += ft_memset_test(); x++;
	grade += ft_bzero_test(); x++;
	grade += ft_strdup_test(); x++;
	grade += ft_memcpy_test(); x++;
	grade += ft_memccpy_test(); x++;
	grade += ft_memmove_test(); x++;
	grade += ft_memcmp_test(); x++;
	grade += ft_memchr_test(); x++;
	grade += ft_memalloc_test(); x++;
	grade += ft_memdel_test(); x++;
	grade += ft_itoa_test(); x++;
	grade += ft_strequ_test(); x++;
	grade += ft_strnequ_test(); x++;
	grade += ft_strclr_test(); x++;
	grade += ft_strnew_test(); x++;
	grade += ft_strdel_test(); x++;
	grade += ft_striter_test(); x++;
	grade += ft_striteri_test(); x++;
	grade += ft_strmap_test(); x++;
	grade += ft_strmapi_test(); x++;
	grade += ft_strsub_test(); x++;
	grade += ft_strtrim_test(); x++;
	grade += ft_strjoin_test(); x++;
	grade += ft_strsplit_test(); x++;

/*
	grade += ft_lstadd_test(); x++;
	grade += ft_lstmap_test(); x++;
	grade += ft_lstdel_test(); x++;
	grade += ft_lstnew_test(); x++;
	grade += ft_lstiter_test(); x++;
	grade += ft_lstdelone_test(); x++;
	grade += ft_idxof_test(); x++;
	grade += ft_contains_test(); x++;
	grade += ft_atoi_base_test(); x++;
*/
	grade /= x;
	printf(KCYN"final grade : ");
	if (grade < 0.33)
		printf(KRED);
	else if (grade < 1.0)
		printf(KYEL);
	else
		printf(KGRN);
	printf("%Lf%%\n"KNRM, grade * 100.0);
    return (0);
}
