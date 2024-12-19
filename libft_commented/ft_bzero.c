/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afabian- <afabian-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:00:12 by afabian-          #+#    #+#             */
/*   Updated: 2024/12/19 21:00:12 by afabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void s un puntero generico a memoria que se desea establecer a  0
y el n es el numero de bytes que se desea establecer a 0  
*/
void ft_zero(void *s, unsigned int n)
{
    //convierte un puntero(ptr) generico a un puntero de unsigned char para poder manipular la memoria (bytes en este caso)
    unsigned char *ptr = (unsigned char *)s;
    while (--n) //mientras el numero que queremos recorrer sea mayor a 0 le restamos 1 hasta que lleguen a 0
    {
       *ptr++ = 0;  // y a ese puntero lo incializamos en 0 y incrementa para pasar al siguiente byte en memoria
    }
}