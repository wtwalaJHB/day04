/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:57:51 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/26 09:48:14 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_recursive_factorial(int nb)
{
	if(nb > 1)
	{
		fact = nb * ft_recursive_factorial(nb -1);
		return fact;
	}
	else
	{
		return 0;
	}
}


