/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:50:00 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/24 17:05:58 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	s1lcount;
	int	s2lcount;

	i = 0;
	s1lcount = 0;
	s2lcount = 0;
	while (s1[i])
	{
		s1lcount++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s2lcount++;
		i++;
	}
	return (s1lcount - s2lcount);
}
