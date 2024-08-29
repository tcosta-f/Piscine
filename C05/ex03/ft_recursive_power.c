/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 21:50:07 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/30 22:44:49 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	pot;
	int	num;
	int	ex;

	num = 8;
	ex = 6;
	pot = ft_recursive_power(num, ex);
	printf("%d", pot);
	return (0);
}
*/
int	ft_recursive_power(int nb, int power)
{
	int	pot;

	pot = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		pot = ft_recursive_power(nb, power - 1);
		pot *= nb;
	}
	return (pot);
}
