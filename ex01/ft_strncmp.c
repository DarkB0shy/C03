/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:40:54 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/25 16:58:13 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int is1;
	int	is2;

	is1 = 0;
	is2 = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			is1 = s1[i];
			is2 = s2[i];
			return (is1 - is2);
		}
		i++;
	}
	return (0);
}
