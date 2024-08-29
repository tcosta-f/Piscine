/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:33:59 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/02 22:36:17 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_strings(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	compare_and_swap(char **s1, char **s2)
{
	int	j;

	j = 0;
	while (((*s1)[j] && (*s2)[j]) || ((*s1)[j] && (*s2)[j] == '\0') 
			|| ((*s2)[j] && (*s1)[j] == '\0'))
	{
		if ((*s1)[j] > (*s2)[j])
		{
			swap_strings(s1, s2);
			return (1);
		}
		else if ((*s1)[j] == (*s2)[j])
			j++;
		else
			break ;
	}
	return (0);
}

void	bubble_sort(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (compare_and_swap(&argv[i], &argv[i + 1]))
			i = 0;
		i++;
	}
}

void	print_sorted_strings(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	onoff;

	onoff = 1;
	if (argc <= 1)
		return (0);
	while (onoff)
	{
		onoff = 0;
		bubble_sort(argc, argv);
	}
	print_sorted_strings(argc, argv);
	return (0);
}
