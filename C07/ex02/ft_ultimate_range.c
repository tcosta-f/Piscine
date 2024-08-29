/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 04:21:48 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/04 01:59:03 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	if (*range == NULL)
		return (-1);
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = -2;
	max = 2;
	i = ft_ultimate_range(&arr, min, max);
	printf("%d\n", i);
	printf("%d\n", arr[0]);
	i = 0;
	while (i < max - (min))
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
