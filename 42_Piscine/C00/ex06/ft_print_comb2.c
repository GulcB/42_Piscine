/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:43:14 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/05 02:44:40 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char g)
{
	write (1, &g, 1);
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
			ft_putchar(48 + x / 10);
			ft_putchar(48 + x % 10);
			ft_putchar(' ');
			ft_putchar(48 + y / 10);
			ft_putchar(48 + y % 10);
			if (x != 98)
			{
				write (1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
