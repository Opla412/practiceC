/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:08:12 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/19 22:18:11 by ravernhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_head.h"

void	cut_rush04(int x, int y, int *aib, char *str)
{
	if (((aib[0] == 1 && aib[2] == 1) || (aib[0] == x && aib[2] == y &&
		x > 1 && y > 1)))
		str[aib[1]] = 'A';
	else if (((aib[0] == 1 && aib[2] == y) || (aib[0] == x && aib[2] == 1)))
		str[aib[1]] = 'C';
	else if (((aib[0] == 1 || aib[0] == x) && (aib[2] > 1 && aib[2] < y))
			|| ((aib[2] == 1 || aib[2] == y) && (aib[0] > 1 && aib[0] < x)))
		str[aib[1]] = 'B';
	else if (aib[0] == x + 1)
		str[aib[1]] = '\n';
	else
		str[aib[1]] = ' ';
	++aib[0];
	++aib[1];
}

char	*rush04(int x, int y)
{
	char	*str;
	int		aib[3];

	if (!(str = (char *)malloc(sizeof(*str) + (x * y))))
		return (0);
	aib[2] = 1;
	aib[1] = 0;
	while (aib[2] <= y && y > 0 && x > 0)
	{
		aib[0] = 1;
		while (aib[0] <= x + 1)
		{
			cut_rush04(x, y, aib, str);
		}
		++aib[2];
	}
	str[aib[1]] = '\0';
	return (str);
}
