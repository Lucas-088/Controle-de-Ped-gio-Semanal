#include <stdio.h> 
#include <stdlib.h>  
#include <locale.h>  
 
// Função para limpar a tela do console 
void limparTela() { 
#ifdef _WIN32 
    system("cls"); 
#else 
    system("clear"); 
#endif 
} 
 
int main() { 
    // Configura o programa para aceitar caracteres em português 
    setlocale(LC_ALL, "Portuguese"); 
 
    //  Declaração de Vetores  
    // Vetor para armazenar o número de carros de cada dia  
    int fluxoCarros[7]; 
    // Vetor de strings para nomear os dias da semana, facilitando a interação 
    char *diasDaSemana[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", 
"Quinta-feira", "Sexta-feira", "Sábado"}; 
 
    // Variáveis para Análise  
    int maiorFluxo = 0;       // Armazena o maior número de carros encontrado 
    int indiceDiaPico = 0;    // Armazena a posição (índice) do dia de pico no vetor 
    int i;                    // Variável contadora para os laços de repetição 
 
    // Tela de Boas-Vindas 
    limparTela(); 
    printf("=============================================\n"); 
    printf("     Controle de Pedagio Semanal v1.0\n"); 
    printf("=============================================\n\n"); 
    printf("Bem-vindo! Por favor, insira os dados da semana.\n\n"); 
 
    // Laço de Repetição para Entrada de Dados 
    for (i = 0; i < 7; i++) { 
        printf("Digite o numero de carros para %s: ", diasDaSemana[i]); 
        scanf("%d", &fluxoCarros[i]); 
 
        // Validação simples para não aceitar números negativos 
        while (fluxoCarros[i] < 0) { 
            printf("O numero de carros nao pode ser negativo. Digite novamente para %s: ", 
diasDaSemana[i]); 
            scanf("%d", &fluxoCarros[i]); 
        } 
    } 
 
    // Laço de Repetição para Processamento dos Dados 
    maiorFluxo = fluxoCarros[0]; // Assume que o primeiro dia teve o maior fluxo 
    for (i = 1; i < 7; i++) { 
        // Estrutura de Decisão 'if' para comparar o fluxo do dia atual com o maior já registrado 
        if (fluxoCarros[i] > maiorFluxo) { 
            maiorFluxo = fluxoCarros[i]; // Atualiza o maior valor 
            indiceDiaPico = i;           // Guarda o índice do dia de pico 
        } 
    } 
 
    // Apresentação dos Resultados 
    limparTela(); 
    printf("\n\n=============================================\n"); 
    printf("      Relatorio Semanal de Fluxo\n"); 
    printf("=============================================\n\n"); 
 
    // Laço 'for' para exibir os dados de forma organizada 
    for (i = 0; i < 7; i++) { 
        // Usa a estrutura de decisão 'if' para aplicar o bônus 
        if (i == indiceDiaPico) { 
            // Destaque para o "Dia de Pico" com cor ou negrito 
            printf("-> %-15s: %d carros   <-- DIA DE PICO!\n", diasDaSemana[i], fluxoCarros[i]); 
        } else { 
            printf("   %-15s: %d carros\n", diasDaSemana[i], fluxoCarros[i]); 
        } 
    } 
    printf("\n=============================================\n"); 
 
    return 0; 
} 
