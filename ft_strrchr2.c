/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:51:46 by qacjl             #+#    #+#             */
/*   Updated: 2024/05/28 15:08:38 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int	i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			str = str + i;
			i = 0;
		}
		i++;
	}
	if (*str  == c)
		return (str);
	else
		return (NULL);
}
*/
//ou une autre facons plus optimise

#include<stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			str = (char *)s;
		}
		s++;
	}
	if (*s  == (unsigned char)c)
		str =  (char *)s;
	return (str);
}

#include<stdio.h>

int	main()
{
	char	*str = "je suis un Chat gentil et en meme temps, je suis aussi un Chat espiegle";
	printf("%s", ft_strrchr(str, 'C'));
	printf("%s", ft_strrchr(str, 'L'));
	printf("%s", ft_strrchr(str, '\0'));
}
