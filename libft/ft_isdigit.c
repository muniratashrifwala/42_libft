/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtashrif <mtashrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:30:10 by mtashrif          #+#    #+#             */
/*   Updated: 2023/07/08 16:29:56 by mtashrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// It checks if a charater is a number of not so 
// it does not check for the int value of the number
// (num >= 0 && num <= 9) we dont need this