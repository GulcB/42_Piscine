/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:03:07 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/13 19:46:42 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	g;
	int	i;

	g = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (g == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			g++;
		}
		else if (g > 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
			g = 0;
		else
			g++;
		i++;
	}
	return (str);
}
