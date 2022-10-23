/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:55:11 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/23 11:58:28 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int a, int b)
{
	int	lx;
	int	rx;
	int	ly;
	int	ry;

	lx = a / 10 + '0';
	rx = a % 10 + '0';
	ly = b / 10 + '0';
	ry = b % 10 + '0';
	write(1, &lx, 1);
	write(1, &rx, 1);
	write(1, " ", 1);
	write(1, &ly, 1);
	write(1, &ry, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putstr(x, y);
			if (x <= 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
