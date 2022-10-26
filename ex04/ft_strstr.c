/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:02:05 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/26 15:08:24 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_w_length(char *skey)
{
	int	i;

	i = 0;
	while (skey[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tofindl;

	i = 0;
	j = 0;
	tofindl = get_w_length(to_find);
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == tofindl)
		{
			i -= j;
			return (&str[i]);
		}
		else
		{
			i -= j;
			j = 0;
		}
		i++;
	}
	return (str);
}
