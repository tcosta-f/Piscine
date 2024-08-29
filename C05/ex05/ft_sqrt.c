/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 08:06:47 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/03 02:32:14 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb; 
	int	res;

	nb = 225; 
	res = ft_sqrt(nb);
	printf("%d", res);
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && n <= 46340)
	{
		if (n * n == nb)
			return (n);
		else
			n++;
	}
	return (0);
}
