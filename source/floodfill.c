/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:32:47 by cschiavo          #+#    #+#             */
/*   Updated: 2023/01/28 14:33:01 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_find(char **temp, t_vector size, t_vector pos)
{
	if (pos.x < 0 || pos.x > size.x || pos.y < 0 || pos.y >= size.y
		|| temp[pos.y][pos.x] == '1')
		return ;
	if (temp[pos.y][pos.x] == 'E')
	{
		temp[pos.y][pos.x] = '1';
		return ;
	}
	temp[pos.y][pos.x] = '1';
	ft_find(temp, size, (t_vector){pos.x + 1, pos.y});
	ft_find(temp, size, (t_vector){pos.x - 1, pos.y});
	ft_find(temp, size, (t_vector){pos.x, pos.y + 1});
	ft_find(temp, size, (t_vector){pos.x, pos.y - 1});
}

int	ft_flood_fill(char **tab, t_vector size, t_vector begin)
{
	int	y;
	int	x;

	y = 0;
	ft_find(tab, size, begin);
	while (tab[y] != 0)
	{
		x = 0;
		while (tab[y][x] != '\0')
		{
			if (tab[y][x] != '0' && tab[y][x] != '1')
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}
