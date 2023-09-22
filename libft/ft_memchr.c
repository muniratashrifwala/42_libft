/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:47:38 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/08 17:09:06 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*string;

	string = str;
	while (n-- > 0)
	{
		if (*(unsigned char *)string == (unsigned char)c)
		{
			return ((void *)string);
		}
		string++;
	}
	return (NULL);
}
