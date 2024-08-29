/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 04:36:37 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/26 19:35:58 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Compastrra stristrings";
	char	to_find[] = "stg";
	char	*ptr;

	ptr = ft_strstr(str, to_find);
	printf("a substring e: %c\n", *ptr);
	printf("a substring e: %s\n", ptr);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (to_find[j] == '\0')
		{
			return (str);
		}
		if (str[i] == to_find[j])
		{
			ptr = &str[i];
			while (str[i] == to_find[j])
			{
				j++;
				i++;
				if (to_find[j] == '\0')
					return (ptr);
			}
			i--;
		}
		i++;
	}
	return (str);
}
