/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnccmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:45:49 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/24 19:50:18 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_max_length(char *world, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (world[i])
	{
		if (i == n)
			return (n);
		else
			i++;
	}
	return (i);
}


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	diff = get_max_length(s1, n) - get_max_length(s2, n);
	return (diff);
}
