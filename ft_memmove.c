/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:16:39 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/21 09:38:15 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destc;
	const unsigned *srcc;

	i = 0;
	destc = (unsigned char *) dest;
	srcc = (const unsigned char *) src;
	while (dest[i])
	{

	}
}
