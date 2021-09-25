/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyucho <hyucho@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:01:18 by hyucho            #+#    #+#             */
/*   Updated: 2021/09/20 20:01:09 by hyucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i] != '\0')
	{
		if (!(('a' <= str[i - 1] && str[i - 1] <= 'z') || ('A' <= str[i - 1] \
			&& str[i - 1] <= 'Z') || ('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] -= 32;
				continue ;
			}
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}
