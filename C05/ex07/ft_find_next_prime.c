/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:29:15 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/02 00:29:40 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	num;
	int	res;

	num = 8;
	res = ft_find_next_prime(num);
	printf("%d\n", res);
	return (0);
}
*/
int	ft_find_next_prime(int nb)
{
	int	n;
	int	mod;

	n = 2;
	if (nb <= 1)
		return (2);
	while (n <= nb / n)
	{
		mod = nb % n;
		if (mod == 0)
		{
			nb++;
			n = 2;
		}
		else
			n++;
	}
	return (nb);
}
