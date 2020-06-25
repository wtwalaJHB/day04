/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:02:48 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/25 12:28:28 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	
	int i;
	int fact;

	i = 0;
	fact = 1;

	while( i < nb)
	{
		fact = fact *(nb - i);
		i++;
	}

	return fact;
}

