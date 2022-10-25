/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:32:36 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/25 16:32:22 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int is1;
	int is2;

	is1 = 0;
	is2 = 0;
	i = 0;
	while (s1[i] || s2[i])
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

int	main(void)
{
	char c[] = "AivasdBJ";
	char c1[] = "ABC";
	ft_strcmp(c, c1);
	return (0);
}
