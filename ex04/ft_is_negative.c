/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:01:09 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/18 16:16:40 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos_neg;

	if (n >= 0)
	{
		pos_neg = 'P';
		write(1, &pos_neg, 1);
	}
	else
	{
		pos_neg = 'N';
		write(1, &pos_neg, 1);
	}
}

int	main(void)
{
	ft_is_negative(-2);
	return (0);
}
