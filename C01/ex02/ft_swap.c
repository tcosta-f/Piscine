/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:11:35 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/17 20:02:56 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	t;
	int	c;
	int	*ptr_var_t;
	int	*ptr_var_c;

	t = 10;
	c = 20;
	ptr_var_t = &t;
	ptr_var_c = &c;
	printf("t = %d, c = %d\n", t, c);
	ft_swap(ptr_var_t, ptr_var_c);
	printf("t = %d, c = %d\n", t, c);
	return (0);
}*/
