/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:08:55 by sopark            #+#    #+#             */
/*   Updated: 2016/11/05 18:02:49 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		find_max(char *str)
{
	int i;
	int max;

	i = 0;
	max = '0';
	while (i < ft_strlen(str))
	{
		if (max < str[i])
			max = str[i];
		i++;
	}
	return (max - 48);
}
