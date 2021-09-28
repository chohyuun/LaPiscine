/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:00:23 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/28 16:16:38 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	length(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
		leng++;
	return (leng);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	base_sys(char *base, unsigned int nbr, int leng, int tm)
{
	char	a;

	if (tm == 0)
		write(1, &base[0], 1);
	else if (nbr == 0)
		return ;
	else
	{
		base_sys(base, (nbr / leng), leng, tm);
		a = base[(nbr % leng)];
		write(1, &a, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				leng;
	int				tm;
	unsigned int	num;

	tm = 1;
	leng = length(base);
	num = 0;
	if (!(check_base(base)))
		return ;
	if (nbr < 0)
	{
		num = (unsigned int)(nbr * -1);
		write(1, "-", 1);
	}
	else
		num = (unsigned int)nbr;
	if (num == 0)
		tm = 0;
	base_sys(base, num, leng, tm);
}
