/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsabau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 10:17:23 by adsabau           #+#    #+#             */
/*   Updated: 2017/07/15 18:12:42 by adsabau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	colle(int x, int y)
{
	int cc;
	int cr;

	cc = 0;
	while (cc < y)
	{
		cr = 0;
		while (cr < x)
		{
			if (cc == 0 && cr == 0)
				ft_putchar('A');
			else if ((cc == 0 && cr == x - 1) || (cc == y - 1 && cr == 0))
				ft_putchar('C');
			else if (cc == y - 1 && cr == x - 1)
				ft_putchar('A');
			else if (cc == 0 || cc == y - 1 || cr == 0 || cr == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cr++;
		}
		ft_putchar('\n');
		cc++;
	}
}
