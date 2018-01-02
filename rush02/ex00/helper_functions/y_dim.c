/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   y_dim.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 01:33:03 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 01:35:10 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		y_dim(char *str)
{
	int i;
	int y;
	int count_lines;

	i = 0;
	y = 0;
	count_lines = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count_lines++;
		i++;
	}
	return (count_lines);
}
