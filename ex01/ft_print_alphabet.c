/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:10:35 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/18 11:37:38 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet, 1);
		i++;
		alphabet++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
