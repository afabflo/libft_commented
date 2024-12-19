/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:21 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:21 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memset(void *ptr, int value, unsigned int num)
{
    unsigned char *p = (unsigned char *)ptr;
    while (num--)
    {
        *p++ = (unsigned char)value;
    }
    return ptr;
}