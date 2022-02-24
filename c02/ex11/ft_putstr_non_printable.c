/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeong <yujeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:58:12 by yujeong           #+#    #+#             */
/*   Updated: 2022/02/14 11:59:58 by yujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	input;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		input = (unsigned char)*str;
		if (input < 32 || input > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[input / 16]);
			ft_putchar(hex[input % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
