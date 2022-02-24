/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeong <yujeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:55:25 by yujeong           #+#    #+#             */
/*   Updated: 2022/02/22 11:57:38 by yujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nbr(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	tmp;

	tmp = nb;
	if (nb < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	if (tmp < 10 && tmp >= 0)
		ft_write_nbr(tmp);
	else if (tmp >= 10)
	{
		ft_putnbr(tmp / 10);
		ft_write_nbr(tmp % 10);
	}
}
