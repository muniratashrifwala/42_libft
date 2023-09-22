/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:41:36 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/16 13:47:20 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < destsize)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < destsize)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < destsize)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
