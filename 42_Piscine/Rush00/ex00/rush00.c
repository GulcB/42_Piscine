/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oay <oay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:33:58 by oay               #+#    #+#             */
/*   Updated: 2024/07/07 18:34:01 by oay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int x, int y, int g, int b)
{
	if ((g == 1 && b == 1) || (g == x && b == y && b != 1 && g != 1))
		ft_putchar('o');
	else if ((g == 1 && b == y) || (g == x && b == 1))
		ft_putchar('o');
	else if (g == 1 || g == x)
		ft_putchar('|');
	else if (b == 1 || b == y)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	g;
	int	b;

	if (x > 0 && y > 0)
	{
		b = 1;
		while (b <= y)
		{
			g = 1;
			while (g <= x)
			{
				draw_line(x, y, g, b);
				g++;
			}
			ft_putchar('\n');
			b++;
		}
	}
	else
		write(1, "Error\n", 6);
}
