/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:25:42 by brocha            #+#    #+#             */
/*   Updated: 2022/07/04 15:26:27 by brocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	d;

	c = 'N';
	d = 'P';
	if (n >= 0)
		write (1, &d, 1);
	else
		write (1, &c, 1);
}
