/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 02:54:48 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/02 04:28:05 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char *str);

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	if (argc <= 1)
		return (-1);
	while (argc > 1 && c < argc)
	{
		putchar(argv[argc - c]);
		c++;
	}
	return (0);
}

void	putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}
