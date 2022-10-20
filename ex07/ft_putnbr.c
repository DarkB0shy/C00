/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:35:21 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/20 10:59:53 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)

{
	char	x;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
			ft_putnbr(nb);
		}
	else if (nb < 10)
	{
		x = nb + '0';
		write(1, &x, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(-5792134);
	return(0);
}
