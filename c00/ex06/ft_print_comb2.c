/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeong <yujeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:21:46 by yujeong           #+#    #+#             */
/*   Updated: 2022/02/09 12:21:50 by yujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		end;
	char	num[4];

	first = 0;
	while (first <= 98)
	{
		end = first + 1;
		while (end <= 99)
		{
			num[0] = '0' + first / 10;
			num[1] = '0' + first % 10;
			num[2] = '0' + end / 10;
			num[3] = '0' + end % 10;
			write(1, &num, 2);
			write(1, " ", 1);
			write(1, &num[2], 2);
			if (first < 98)
				write(1, ", ", 2);
			end++;
		}
		first++;
	}
}
