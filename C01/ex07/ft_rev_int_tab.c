/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:12:32 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/23 10:15:05 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *tab, int i, int j)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		ft_swap(tab, i, size);
		i++;
	}
}
