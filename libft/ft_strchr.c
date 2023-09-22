/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:29:41 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/08 16:40:35 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str && (unsigned char)*str != ch)
	{
		str++;
	}
	if (ch == (unsigned char)*str)
	{
		return ((char *)str);
	}
	return (NULL);
}
