/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:46:39 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/23 11:42:12 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;
	int	numbers;

	numbers = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &numbers, 1);
		i++;
		numbers++;
	}
}
