/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:36 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:36 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	char	c;

	nl = n;
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = -nl;
	}
	if (nl >= 10)
		ft_putnbr_fd(nl / 10, fd);
	c = (nl % 10) + '0';
	write(fd, &c, 1);
}