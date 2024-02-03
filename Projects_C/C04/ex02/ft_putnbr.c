/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:06:18 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 03:18:04 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para imprimir um caractere na saída padrão
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Função para imprimir um número inteiro na saída padrão
void ft_putnbr(int nb)
{
    // Tratamento especial para o menor inteiro representável em um sistema de 32 bits
    if (nb == -2147483648)
    {
        ft_putchar('-'); // Imprime o caractere '-'
        ft_putchar('2'); // Imprime o dígito '2'
        ft_putnbr(147483648); // Imprime o restante do número separadamente
    }
    // Tratamento para números negativos
    else if (nb < 0)
    {
        ft_putchar('-'); // Imprime o caractere '-'
        nb = -nb; // Obtém o valor absoluto do número
        ft_putnbr(nb); // Chama recursivamente a função para imprimir o número absoluto
    }
    // Tratamento para números com mais de um dígito
    else if (nb > 9)
    {
        ft_putnbr(nb / 10); // Imprime o dígito da dezena
        ft_putnbr(nb % 10); // Imprime o dígito das unidades
    }
    // Tratamento para números de um único dígito
    else
    {
        ft_putchar(nb + 48); // Imprime o dígito diretamente
    }
}
