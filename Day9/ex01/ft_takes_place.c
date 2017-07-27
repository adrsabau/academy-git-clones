/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsabau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:18:10 by adsabau           #+#    #+#             */
/*   Updated: 2017/07/27 11:58:53 by adsabau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_take_place(int hour)
{
	int c_time;

	if (c_time > 12)
		c = hour % 12;
	else if (c_time == 0)
		c_time == 12;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (c_time == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", c_time, (c_time + 1) % 12);
	else
		printf("%d.00 P.M AND %d.00 P.M.\n", c_time, (c_time + 1) % 12);
}
