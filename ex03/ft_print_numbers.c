/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:46:39 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/18 11:59:07 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;
	int numbers = '0';

	i = 0;
	while (i < 10)
	{
		write(1, &numbers, 1);
		i++;
		numbers++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
