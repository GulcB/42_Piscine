/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:49:27 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/17 23:51:41 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i] != '\0')
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
