#include <stdio.h>
#include "libft.h"
#include "tester.h"

static char		g_dest1[6][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static char		g_dest2[6][7] =
{
	"abc",
	"abc",
	"abc",
	"abc",
	"abc"
};

static const char	*g_srcs[] =
{
	"",
	"\0",
	"def",
	"defg",
	"0",
	NULL
};

static int g_lens[11] =
{
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	0
};

double	ft_strlcat_test(void)
{
	size_t		c;
	double		grade;
	long double	success;
	size_t		result;
	size_t		expected;

	c = 0;
	success = 0;
	printf(KYEL"testing ft_strlcat()... "KNRM);
	while (g_srcs[c])
	{
		expected = strlcat(g_dest1[c], g_srcs[c], g_lens[c]);
		result = ft_strlcat(g_dest2[c], g_srcs[c], g_lens[c]);
		if (result == expected && strcmp(g_dest1[c], g_dest2[c]) == 0)
			success++;
		else
			printf(KRED"\n\tERROR expected %p = \"%s\"(%lu) but got %p = \"%s\"(%lu)",
				(void *)g_dest1[c], g_dest1[c], expected, (void *)g_dest2[c], g_dest2[c], result);
		c++;
	}
	printf(KGRN);
	if ((grade = (success / ((long double)c))) < 1.0)
		printf("\ngrade :%s", grade < 0.33 ? KRED : KYEL);
	printf("%.2f%%\n"KNRM, grade * 100.0);
	return (grade);
}
