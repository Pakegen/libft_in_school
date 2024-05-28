/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:52:48 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/28 11:15:26 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	compteur;
	int			neg;

	compteur = 1;
	neg = 1;
	if (n == 0)
	{
		return (ft_putchar_fd("0", fd));
	}
	if (n < 0)
	{
		n = -n;
		neg = -neg;
	}
	while (compteur <= n)
		compteur = compteur * 10;
	while (compteur > 1)
	{
		compteur = compteur / 10;
		ft_putchar_fd(n / compteur, fd);
		n = n % compteur;
	}
}
