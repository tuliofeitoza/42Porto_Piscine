/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:35:32 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 18:38:27 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_ft
void ft_ft(int *nbr);

// Definição da função ft_ft
void ft_ft(int *nbr)
{       
    // Atribui o valor 42 ao inteiro apontado pelo ponteiro nbr
    *nbr = 42;
} 
