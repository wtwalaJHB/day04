/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:12:32 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/26 09:43:10 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int n);
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

