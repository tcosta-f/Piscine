/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:14:07 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/27 02:25:55 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[13] = "Feliz Natal!";
	char	dest[30] = "E Bom 2025!";
	int		size;

	size = ft_strlcat(dest, src, 24);
	printf("size = %d\n%s\n%s", size, dest, src);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	j = 0;
	len_dest = ft_strlen(dest);
	i = len_dest;
	len_src = ft_strlen(src);
	if (size <= len_dest)
	{
		return (len_dest + len_src);
	}
	while (size > len_dest + 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_src + len_dest);
}
