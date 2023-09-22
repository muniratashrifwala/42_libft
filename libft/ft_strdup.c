/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:39:10 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/08 17:18:19 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*word_dup;
	char	*cpy;

	word_dup = (char *)malloc(ft_strlen(str) + 1);
	if (word_dup == NULL)
		return (NULL);
	cpy = word_dup;
	while (*str)
		*word_dup++ = *(char *)str++;
	*word_dup = '\0';
	return (cpy);
}
