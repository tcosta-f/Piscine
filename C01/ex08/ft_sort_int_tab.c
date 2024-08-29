/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 02:29:42 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/19 17:51:56 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	swap_func(int *tab_n, int *tab_0, int temp, int size)
{
	int	swap;
	int	x;

	x = 0;
	swap = 0;
	while (x < size -1)
	{
		if (*tab_0 > *tab_n)
		{
			temp = *tab_0;
			*tab_0 = *tab_n;
			*tab_n = temp;
			tab_n++;
			swap = 1;
		}
		else
		{
			tab_n++;
		}
		tab_0++;
		x++;
	}
	return (swap);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*tab_0;
	int	*tab_n;
	int	temp;
	int	swap;

	temp = 0;
	tab_0 = &tab[0];
	tab_n = &tab[1];
	swap = 1;
	while (swap == 1)
	{
		swap = swap_func(tab_n, tab_0, temp, size);
		tab_n = &tab[1];
		tab_0 = &tab[0];
	}
}
/*
int	main(void)
{
	int	a[12] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 15, -100};
	int	*tab;
	char	quebra = 10;
//	a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	setlocale(LC_ALL, "Portuguese"); #include <locale.h>
	tab = a;
	for (int i = 0; i < 12; i++)
        {
        printf("%d,", a[i]);
	}
	printf("%c", quebra);
	ft_sort_int_tab(tab, 12);
	for (int i = 0; i < 12; i++)
	{
	printf("%d,", tab[i]);
	}
}*/
