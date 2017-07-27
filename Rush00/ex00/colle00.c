/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsabau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:04:11 by adsabau           #+#    #+#             */
/*   Updated: 2017/07/15 13:05:10 by adsabau          ###   ########.fr       */
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
			if ((cc == 0 && cr == 0) || (cc == y - 1 && cr == 0))
				ft_putchar('o');
			else if ((cc == 0 && cr == x - 1) || (cc == y - 1 && cr == x - 1))
				ft_putchar('o');
			else if (cc == 0 || cc == y - 1)
				ft_putchar('-');
			else if (cr == 0 || cr == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cr++;
		}
		ft_putchar('\n');
		cc++;
	}
}
