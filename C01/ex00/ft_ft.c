/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:37:20 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/17 18:40:20 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main()
{
	int	t;
	int	*nbr;
	
	t = 24;
	nbr = &t;	
	ft_ft(nbr);
	//write(1, &t, 1);
	printf("%d", t);
	return (0);
}*/
