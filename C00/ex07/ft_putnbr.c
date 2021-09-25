/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:22:53 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/16 12:31:32 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print_int(int para)
{
	char	print_num;

	if (para == 0)
		return ;
	else
	{
		print_int(para / 10);
		print_num = para % 10 + '0';
		write(1, &print_num, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, & "-", 1);
		nb *= -1;
	}
	if (nb == -2147483648)
		write(1, & "2147483648", 10);
	else if (nb == 0)
		write(1, & "0", 1);
	else
		print_int(nb);
}
