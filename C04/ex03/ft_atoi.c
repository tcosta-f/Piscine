/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 04:52:29 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/28 06:03:23 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);
int	ft_sign(char *str, int *i);
int	ft_count_numb(char *str, int *i);
int	str_num_len(char *str);

int	main(int argc, char *argv[])
{
	int	res;

	res = ft_atoi(&argv[argc - 1][0]);
	printf("%d", res);
}
*/
int	str_num_len(char *str)
{
	int	j;
	int	casa;

	j = 0;
	casa = 1;
	while (str[j] >= 48 && str[j] <= 57)
		j++;
	while (j != 1)
	{
		casa *= 10;
		j--;
	}
	return (casa);
}

int	ft_sign(char *str, int *i)
{
	int	sig;

	sig = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		{
			sig++;
			(*i)++;
		}
		else
			(*i)++;
	}
	return (sig);
}

int	ft_count_numb(char *str, int *i)
{
	int	num;
	int	casa;
	int	res;

	res = 0;
	while (str[*i] >= 48 && str[*i] <= 57)
	{
		casa = str_num_len(&str[*i]);
		num = ((str[*i] - '0') * casa);
		res += num;
		(*i)++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	res;

	res = 0;
	i = 0;
	sig = 0;
	if (*str == '\0')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sig = ft_sign(str, &i);
	res = ft_count_numb(str, &i);
	if (!(sig % 2 == 0))
		return (-1 * res);
	else
		return (res);
}
