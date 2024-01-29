/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:49:45 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 04:51:23 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strcapitalize
char *ft_strcapitalize(char *str);

// Definição da função ft_strcapitalize
char *ft_strcapitalize(char *str)
{
    // Declaração de variáveis
    int i; // Variável de iteração sobre a string
    int capitalize; // Indicador para capitalização
    
    // Inicialização das variáveis
    i = 0;
    capitalize = 1; // Começamos com a próxima letra em maiúscula
    
    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual é uma letra ou um número
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            // Se for a primeira letra ou número da palavra, converte para maiúscula
            if (capitalize == 1)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32; // Converte para maiúscula subtraindo 32 da tabela ASCII
                capitalize = 0; // Alterna para não capitalizar as letras seguintes
            }
            // Se não for a primeira letra ou número da palavra, converte para minúscula
            else
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32; // Converte para minúscula adicionando 32 à tabela ASCII
            }
        }
        // Se o caractere não for uma letra ou número, indica que a próxima letra deve ser capitalizada
        else
            capitalize = 1;
        
        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
    
    // Retorna a string modificada
    return (str);
}

#include <stdio.h>

// Função principal para teste
int main()
{       
    // String de teste
    char i[58] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    
    // Chamada da função para capitalizar a string
    ft_strcapitalize(i);
    
    // Imprime a string modificada
    printf("%s", i);

    return 0;
}
