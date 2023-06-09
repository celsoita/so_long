/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:27:58 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 14:55:47 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
		return (1);
	else
		return (0);
}
