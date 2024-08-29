/* *****ft_print_comb2********************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:22:58 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/14 06:01:03 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	while (b <= '9')
	{
		b = a + 1;
		while (c <= '9')
		b = a;
		else;
		{
			c = b + 1;
			while (d <= '9')
			c = b;
			else;
			{
				d = c + 1;
				while (d <= '9')
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, ", ", 2);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
