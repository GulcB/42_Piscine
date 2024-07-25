/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:00:37 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/05 02:52:43 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char g)
{
	write (1, &g, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	g;

	g = 122;
	while (g >= 97)
	{
		write(1, &g, 1);
		g--;
	}
}
