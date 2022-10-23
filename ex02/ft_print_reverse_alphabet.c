/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:16:49 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/23 11:43:08 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet;
	int		i;

	reverse_alphabet = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &reverse_alphabet, 1);
		i++;
		reverse_alphabet--;
	}
}
