/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:24:43 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 15:24:54 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
<<<<<<< HEAD
		ptr[i++] = '\0';
=======
	{
		ptr[i] = '\0';
		i++;
	}
>>>>>>> 99fa547ee7e245054f5b8fbb8bc7895de20641dc
}
