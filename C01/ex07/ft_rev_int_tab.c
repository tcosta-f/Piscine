/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:26:58 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/19 02:06:51 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <locale.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab_last;
	int	temp;

	i = 0;
	tab_last = size -1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[tab_last];
		tab[tab_last] = temp;
		i++;
		tab_last--;
	}
}
/*
int	main(void)
{
	int	a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	*tab;
//	a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	setlocale(LC_ALL, "Portuguese");
	tab = a;
	ft_rev_int_tab(tab, 10);
	for (int i = 0; i < 10; i++)
	{
	printf("%d, ", tab[i]);
	}
}*/
