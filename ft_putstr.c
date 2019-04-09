/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:40:51 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 15:40:58 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	size_t	len;

	if (!str || !*str)
		return ;
	len = ft_strlen(str);
	write(1, str, len);
}
