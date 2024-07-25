/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbodur <gbodur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:11:06 by gbodur            #+#    #+#             */
/*   Updated: 2024/07/14 13:12:16 by gbodur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (src[g] != '\0' && g < nb)
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';
	return (dest);
}
