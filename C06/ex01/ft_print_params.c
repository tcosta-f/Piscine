/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 02:38:29 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/02 02:48:19 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (-1);
	while (argc > 1 && i < argc)
	{
		ft_putchar(argv[i]);
		i++;
	}
	return (0);
}
