/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:30:45 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/23 14:13:32 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*str;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	*str = *ptr;
	while (size > 0)
	{
		size--;
		*ptr = '\0';
		ptr++;
	}
	return (str);
}
