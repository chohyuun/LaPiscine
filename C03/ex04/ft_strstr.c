/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:53:58 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/23 19:12:18 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_str(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (str[i] != '\0' && str[i] == to_find[j])
	{
		if (to_find[j + 1] == '\0')
			return (1);
		i++;
		j++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	result;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			result = find_str(str, to_find, i);
			if (result == 1)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
