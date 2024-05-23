/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:07:52 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/21 12:11:47 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			str = s;
		}
		s++;
	}
	if (c == '\0')
		return (NULL);
	if (*str == c)
		return ((char *)str);
	return (0);
}
