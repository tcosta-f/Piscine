/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 19:09:23 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/30 21:15:57 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	num;

	num = 17;
	num = ft_iterative_factorial(num);
	printf("%d\n", num);
	return (0);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb != 1)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
