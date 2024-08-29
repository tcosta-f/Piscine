/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 20:06:17 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/17 22:00:19 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	q;
	int	d;
	int	ptr_div;
	int	ptr_rest;

	q = 7;
	d = 3;
	ptr_div = 10;
	ptr_div = 3;
	ft_div_mod(q, d, &ptr_div, &ptr_rest);
	printf ("a: %d\nb: %d\nresultdo: %d\nresto: %d\n", q, d, ptr_div, ptr_rest);
	return (0);
}*/
