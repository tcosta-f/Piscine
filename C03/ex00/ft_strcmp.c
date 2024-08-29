/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:29 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/27 03:34:03 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "TiagO";
	char	str2[] = "Tiago";
	char	str3[] = "Tiag0";
	char	str4[] = "TiagO";
	char	str5[] = "Tia";
	char	str6[] = "TiagOs";
	int		r;
	int		r1;
	int		r2;
	int		r3;
	int		r4;

	r = ft_strcmp(str1, str2);
	r1 = ft_strcmp(str1, str3);
	r2 = ft_strcmp(str1, str4);
	r3 = ft_strcmp(str1, str5);
	r4 = ft_strcmp(str1, str6);
	printf("O<o - (%d)\nO>0 - %d\no=o - %d\ng>" " - %d\n" "<s - (%d)\n"
, r, r1, r2, r3, r4);
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if ((s1[i] == '\0' && s2[i]) || (s1[i] && s2[i] == '\0'))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
