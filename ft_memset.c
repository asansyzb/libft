/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:15:17 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 16:15:30 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
<<<<<<< HEAD
		ptr[i++] = c;
=======
	{
		ptr[i] = c;
		i++;
	}
>>>>>>> 99fa547ee7e245054f5b8fbb8bc7895de20641dc
	return (s);
}
