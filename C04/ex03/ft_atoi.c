/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:55 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/27 20:10:07 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num(char num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}

int	check_alpha(char num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
		return (1);
	return (0);
}

int	check_space(char num)
{
	if ((num > 8 && num < 14) && num == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	num;

	i = -1;
	num = 0;
	minus = 1;
	while (1)
		if (!(check_space(str[++i])))
			break ;
	while (str[i] != '\0')
	{
		if (i != 0 && !(check_num(str[i])) && check_num(str[i - 1]))
			break ;
		else if ((str[i] == '-' || str[i] == '+') && \
				(check_alpha(str[i + 1]) || check_space(str[i + 1])))
			break ;
		else if (str[i] == '-')
			minus *= -1;
		else if (check_num(str[i]))
			num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * minus);
}
