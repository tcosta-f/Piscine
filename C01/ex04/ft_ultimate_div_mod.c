/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:04:03 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/17 23:19:02 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a;
	r = *b;
	*a = d / r;
	*b = d % r;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 21;
	b = 7;
	printf("a = %d\nb = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("divisao: %d\nresto: %d\n", a, b);
	return (0);
}*/
