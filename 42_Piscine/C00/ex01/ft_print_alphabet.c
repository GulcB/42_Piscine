/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:48:31 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/05 02:52:56 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char g)
{
	write (1, &g, 1);
}

void	ft_print_alphabet(void)
{
	char	g;

	g = 97;
	while (g <= 122)
	{
		write(1, &g, 1);
		g++;
	}
}
