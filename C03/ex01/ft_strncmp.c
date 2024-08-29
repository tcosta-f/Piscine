/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:49:29 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/26 18:25:10 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

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

	r = ft_strncmp(str1, str2, 5);
	r1 = ft_strncmp(str1, str3, 5);
	r2 = ft_strncmp(str1, str4, 5);
	r3 = ft_strncmp(str1, str5, 4);
	r4 = ft_strncmp(str1, str6, 6);
	printf("%d\n%d\n%d\n%d\n%d\n", r, r1, r2, r3, r4);
	return (0);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
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
	if ((s1[i] == '\0' && s2[i] && i < n) || (s1[i] && *s2 == '\0' && i < n))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
