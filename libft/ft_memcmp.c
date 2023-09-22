/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:56:45 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/08 17:10:07 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	res;

	while (n-- > 0)
	{
		res = *(unsigned char *)str1 - *(unsigned char *)str2;
		if (res != 0)
			return (res);
		str1++;
		str2++;
	}
	return (0);
}
