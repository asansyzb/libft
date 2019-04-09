/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:53:58 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 19:40:13 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
<<<<<<< HEAD
=======
	size_t		i;
>>>>>>> 99fa547ee7e245054f5b8fbb8bc7895de20641dc
	char		*cdest;
	const char	*csrc;

	cdest = dest;
	csrc = src;
	if (cdest < csrc)
		return (ft_memcpy(dest, src, n));
	else
	{
<<<<<<< HEAD
=======
		i = -1;
>>>>>>> 99fa547ee7e245054f5b8fbb8bc7895de20641dc
		while (n)
		{
			*(cdest + n - 1) = *(csrc + n - 1);
			n--;
		}
	}
	return (dest);
}
