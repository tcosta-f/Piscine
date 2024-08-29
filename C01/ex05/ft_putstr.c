/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:48:05 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/19 16:21:08 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	char	c;
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		c = str[count];
		write(1, &c, 1);
		count++;
	}
}
/*
int	main(void)
{
	char	*str;
	
	str = "Be happy!";
	ft_putstr(str);
	return (0);
}*/
