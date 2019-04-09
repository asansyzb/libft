/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:17:23 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 16:18:29 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
<<<<<<< HEAD
	size_t	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
=======

	i = 0;
	while (i < ft_strlen(s) + 1)
>>>>>>> 99fa547ee7e245054f5b8fbb8bc7895de20641dc
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i++;
	}
	return ((void *)0);
}
