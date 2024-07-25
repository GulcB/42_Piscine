/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:11:12 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/14 13:28:27 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	g;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		g = 0;
		while (str[i + g] == to_find[g])
		{
			if (to_find [g + 1] == '\0')
				return (&str[i]);
			g++;
		}
		i++;
	}
	return (0);
}
