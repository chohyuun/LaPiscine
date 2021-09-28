/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:03:34 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/28 21:47:18 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str += 1;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print(argv[0]);
}
