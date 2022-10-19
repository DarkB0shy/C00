/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:55:11 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/19 17:09:53 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	lx;
	int	rx;
	int	ly;
	int	ry;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			lx = x / 10 + '0';
			rx = x % 10 + '0';
			ly = y / 10 + '0';
			ry = y % 10 + '0';
			write(1, &lx, 1);
			write(1, &rx, 1);
			write(1, " ", 1);
			write(1, &ly, 1);
			write(1, &ry, 1);
			if (x <= 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2 ();
	return (0);
}
