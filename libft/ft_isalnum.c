/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:30:01 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/13 12:40:04 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// Second way to solve this function by calling other functions
//  int ft_isalnum(int i)
//  {
//      return (ft_isalpha(i) || ft_isdigit(i));
//  }
