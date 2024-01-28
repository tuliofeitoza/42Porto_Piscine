/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:38:32 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 03:46:46 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função que será definida posteriormente
void ft_is_negative(int n);

// Definição da função ft_is_negative
void ft_is_negative(int n)
{
    // Verifica se o número é maior ou igual a zero
    if (n >= 0)
        write(1, "P", 1); // Escreve 'P' (positivo) na saída padrão (normalmente o terminal)
    else
        write(1, "N", 1); // Caso contrário, escreve 'N' (negativo) na saída padrão
}

// Função principal do programa
int main()
{
    // Chama a função ft_is_negative com dois números para demonstrar
    ft_is_negative(42); // Passa o número 42
    write(1, "\n", 1); // Escreve uma quebra de linha
    ft_is_negative(-42); // Passa o número -42
    write(1, "\n", 1); // Escreve uma quebra de linha
    return (0); // Retorna 0 para indicar que o programa terminou com sucesso
}

