/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:23:25 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 03:28:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função que será definida posteriormente
void ft_print_reverse_alphabet(void);

// Definição da função ft_print_reverse_alphabet
void ft_print_reverse_alphabet(void)
{
    char z = 'z'; // Declaração e inicialização da variável 'z' com o valor 'z', que será o ponto de partida para imprimir o alfabeto reverso

    // Loop para percorrer as letras do alfabeto em ordem reversa, começando de 'z' e indo até 'a'
    while (z >= 'a')
    {
        // Escreve o caractere atual na saída padrão (normalmente o terminal)
        write(1, &z, 1);
        z--; // Decrementa 'z' para avançar para a próxima letra no alfabeto
    }
}

// Função principal do programa
int main()
{
    ft_print_reverse_alphabet(); // Chama a função para imprimir o alfabeto em ordem reversa
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

