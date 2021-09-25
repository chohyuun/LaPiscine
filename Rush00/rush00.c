/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchoi <bchoi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:26:36 by bchoi             #+#    #+#             */
/*   Updated: 2021/09/11 17:29:35 by bchoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	tempX;
	int	tempY;

	tempY = 1;
	while (tempY <= b && a != 0 && b != 0)
	{
		tempX = 1;
		while (tempX <= a)
		{
			if ((tempX == 1 || tempX == a) && (tempY == 1 || tempY == b))
				ft_putchar('o');
			else if (tempX == 1 || tempX == a)
				ft_putchar('|');
			else if (tempY == 1 || tempY == b)
				ft_putchar('-');
			else
				ft_putchar(' ');
			tempX++;
		}
		tempY++;
		ft_putchar('\n');
	}
}
