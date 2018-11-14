/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 04:27:09 by abaurens          #+#    #+#             */
/*   Updated: 2018/11/14 18:52:39 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

typedef struct
{
	int			v;
	const char	*target;
}				t_data;

/*
** HAND TESTED
*/

double			ft_putnbr_test(void);
double			ft_putstr_test(void);
double			ft_putendl_test(void);
double			ft_putchar_test(void);
double			ft_putnbr_fd_test(void);
double			ft_putstr_fd_test(void);
double			ft_putchar_fd_test(void);
double			ft_putendl_fd_test(void);

/*
** DONE
*/

double			ft_isdigit_test(void);
double			ft_isalpha_test(void);
double			ft_isprint_test(void);
double			ft_isalnum_test(void);
double			ft_isascii_test(void);
double			ft_tolower_test(void);
double			ft_toupper_test(void);
double			ft_atoi_test(void);
double			ft_strlen_test(void);

double			ft_strcat_test(void);
double			ft_strncat_test(void);
double			ft_strlcat_test(void);
double			ft_strcmp_test(void);
double			ft_strncmp_test(void);
double			ft_strcpy_test(void);
double			ft_strncpy_test(void);
double			ft_strstr_test(void);
double			ft_strnstr_test(void);

double			ft_strdup_test(void);
double			ft_memcmp_test(void);
double			ft_memset_test(void);
double			ft_memchr_test(void);
double			ft_memcpy_test(void);
double			ft_memccpy_test(void);
double			ft_memmove_test(void);
double			ft_bzero_test(void);
double			ft_strchr_test(void);
double			ft_strrchr_test(void);

double			ft_memalloc_test(void);
double			ft_memdel_test(void);
double			ft_itoa_test(void);

double			ft_strequ_test(void);
double			ft_strnequ_test(void);
double			ft_strnew_test(void);
double			ft_strdel_test(void);
double			ft_strclr_test(void);
double			ft_strmap_test(void);
double			ft_strmapi_test(void);
double			ft_striter_test(void);
double			ft_striteri_test(void);

/*
** WIP
*/

double			ft_strsub_test(void);
double			ft_strtrim_test(void);
double			ft_strjoin_test(void);
double			ft_strsplit_test(void);

/*
** TODO
*/

double			ft_lstadd_test(void);
double			ft_lstmap_test(void);
double			ft_lstdel_test(void);
double			ft_lstnew_test(void);
double			ft_lstiter_test(void);
double			ft_lstdelone_test(void);

#endif
