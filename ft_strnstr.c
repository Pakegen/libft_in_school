/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:12:50 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/28 08:18:40 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	char	*max;
	char	*min;

	max = (char *)big;
	min = (char *)little;
	i = 0;
	if (min == NULL)
		return (max);
	while (*max != '\0')
	{
		while (min[i] != '\0' && 0 < len)
		{
			if (min[i] == *max)
				return (min + i);
			i++;
		}
		len--;
		max++;
		i = 0;
	}
	return (NULL);
}
