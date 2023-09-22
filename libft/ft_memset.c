/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:28:45 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/13 15:03:27 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*head;

	i = 0;
	head = str;
	while (i < n)
	{
		*head++ = (unsigned char) c;
		i++;
	}
	return (str);
}
