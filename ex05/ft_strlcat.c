/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:34:33 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/26 18:32:38 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] && j < size - 1 -i)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (i);
}

int	main(void)
{
	char *c[5] = "Bomba";
	char *cc[12] = " anarchica24";
	ft_strlcat(c, cc, 10);
	return (0);
}
