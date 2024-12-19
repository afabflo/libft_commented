/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:12 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:12 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    while (--n)
    {
        *d++ = *s++; //copia byte a byte 
    }
    return dest;
}