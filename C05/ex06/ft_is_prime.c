/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:31:11 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/03 02:49:07 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	num;
	int	res;

	num = 7;
	res = ft_is_prime(num);
	printf("%d\n", res);
	return (0);
}
*/
int	ft_is_prime(int nb)
{
	int	n;
	int	mod;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb / 2)
	{
		mod = nb % n;
		if (mod == 0)
			return (0);
		else
			n++;
	}
	return (1);
}
