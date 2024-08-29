/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:11:24 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/27 16:31:25 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "conta quantos caracteres tem esta frase!";

	printf("A string tem %d caracteres!\n", ft_strlen(str));
}
*/
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}
