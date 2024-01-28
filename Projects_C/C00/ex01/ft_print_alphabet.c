/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:10:49 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 01:21:50 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função que será definida posteriormente
void ft_print_alphabet(void);

// Definição da função ft_print_alphabet
void ft_print_alphabet(void)
{
    char a = 'a'; // Declaração e inicialização da variável 'a' com o valor 'a', que será o ponto de partida para imprimir o alfabeto

    // Loop para percorrer as letras do alfabeto, começando de 'a' e indo até 'z'
    while (a <= 'z')
    {
        // Escreve o caractere atual na saída padrão (normalmente o terminal)
        write(1, &a, 1);
        a++; // Avança para a próxima letra no alfabeto
    }
}

// Função principal do programa
int main()
{
    ft_print_alphabet(); // Chama a função para imprimir o alfabeto
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

