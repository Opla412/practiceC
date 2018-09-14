/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:08:12 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/05 23:36:05 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	*symb;
	int		a;
	int		b;

	symb = "CAB  ";
	b = 1;
	while (b <= y && y > 0 && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if (((a == 1 && b == 1) || (a == x && b == y && x > 1 && y > 1)))
				ft_putchar(symb[1]);
			else if (((a == 1 && b == y) || (a == x && b == 1)))
				ft_putchar(symb[0]);
			else if (((a == 1 || a == x) && (b > 1 && b < y))
				|| ((b == 1 || b == y) && (a > 1 && a < x)))
				ft_putchar(symb[2]);
			else
				ft_putchar(symb[3]);
			++a;
		}
		ft_putchar('\n');
		++b;
	}
}
