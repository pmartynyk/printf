/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:53:25 by pmartyny          #+#    #+#             */
/*   Updated: 2018/10/30 15:53:07 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	if (s != 0)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
		ft_putchar('\n');
	}
}