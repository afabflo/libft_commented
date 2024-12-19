/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:53 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:01:53 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strdup(const char *s)
{
    char *ptr;
    ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (ptr == NULL)
    {
        return NULL;
    }
    ft_memcpy(ptr, s, (ft_strlen(s) + 1));
    return ptr;
}