/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 04:21:48 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/03 06:55:02 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return (arr = NULL);
	arr = (int *)malloc((max - (min)) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*arr;

	i = 0;
	min = -21;
	max = 30;
	arr = ft_range(min, max); 
	while (i < max - (min))
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
