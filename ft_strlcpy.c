/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:00:08 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/28 08:11:38 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			srcsize;

	i = 0;
	srcsize = (char *)ft_strlen(src);
	if (dstsize == NULL)
		return (srcsize);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
