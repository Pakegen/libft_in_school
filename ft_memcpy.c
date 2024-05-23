/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:56:47 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/23 15:02:50 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*d1;
	unsigned char		*s1;

	i = 0;
	d1 = (unsigned char *) dest;
	s1 = (unsigned char *)src;
	while (d1[i] && n > 0)
	{
		n--;
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}
