/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:21 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:21 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_isacii(int c){
    if( c >= 0 && c <= 127){
    return 1;
    }
    return 0;
}