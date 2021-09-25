/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:20:04 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/16 12:30:54 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_num_to_char(int para)
{
	char	arry[2];

	arry[0] = para / 10 + '0';
	arry[1] = para % 10 + '0';
	write(1, arry, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num_to_char(a);
			write(1, " ", 1);
			print_num_to_char(b);
			if (a != 98 || b != 99)
				write(1, & ", ", 2);
			b++;
		}
		a++;
	}
}
