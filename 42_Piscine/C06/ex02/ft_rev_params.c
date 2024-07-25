/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:49:36 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/17 23:52:08 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc >= 1)
	{
		i = argc -1;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar (argv[i][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
