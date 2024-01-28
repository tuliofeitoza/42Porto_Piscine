/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:21:05 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 19:34:20 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_div_mod
void ft_div_mod(int *a, int *b, int *div, int *mod);

// Definição da função ft_div_mod
void ft_div_mod(int *a, int *b, int *div, int *mod)
{       
    // Calcula o resultado da divisão de *a por *b e armazena em *div
    *div = *a / *b;
    
    // Calcula o resto da divisão de *a por *b e armazena em *mod
    *mod = *a % *b;
} 
