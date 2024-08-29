/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:36:40 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/02 00:39:08 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	n;

	n = 7;
	n = ft_fibonacci(n);
	printf("%d", n);
	return (0);
}
*/
int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
	{
		return (1);
	}
	else
		res = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (res);
}
