/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:08:01 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/27 21:44:12 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nbr;

	nbr = -7392736;
	ft_putnbr(nbr);
	return (0);
}
*/
void	ft_nbr_to_char(int nb)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_nbr_to_char(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb >= -2147483647 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
			ft_nbr_to_char(nb);
		}
		else
		{
			ft_nbr_to_char(nb);
		}
	}
}
