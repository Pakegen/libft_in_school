/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:48:30 by qacjl             #+#    #+#             */
/*   Updated: 2024/05/28 13:20:49 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_alt_neg(char *str, long int compteur, int len, int n)
{
	int	i;

	i = 0;
	str[i++] = '-';
	while (i < len && n != 0)
	{
		compteur = compteur / 10;
		str[i] = n / compteur + '0';
		n = n % compteur;
		i++;
	}
}

void	ft_alt(char *str, long int compteur, int len, int n)
{
	int	i;

	i = 0;
	while (i < len && n != 0)
	{
		compteur = compteur / 10;
		str[i] = n / compteur + '0';
		n = n % compteur;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				neg;
	long int		compteur;
	unsigned int	len;

	neg = 1;
	compteur = 1;
	len = 0;
	if (n < 0 && len++ >= 0 && neg-- == 1)
		n = -n;
	if (compteur > n)
		len = 1;
	while (compteur <= n && len++ >= 0)
		compteur = compteur * 10;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (neg == 0)
		ft_alt_neg(str, compteur, len, n);
	else if (n == 0)
		str[0] = '0';
	else if (n >= 1)
		ft_alt(str, compteur, len, n);
	str[len] = '\0';
	return (str);
}
