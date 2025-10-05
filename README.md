# Controle-de-Pedagio-Semanal

Este é um programa simples de console, desenvolvido em linguagem C, para registrar e analisar o fluxo de veículos em um pedágio durante o período de uma semana.

# Funcionalidades #

Entrada de Dados Diários: O programa solicita ao usuário que insira o número de carros para cada dia da semana, de Domingo a Sábado.

Validação de Entrada: O sistema impede a inserção de números negativos para a contagem de carros, solicitando a correção do valor.

Análise de Fluxo: O código processa os dados inseridos para identificar o dia da semana com o maior fluxo de veículos.

Relatório Semanal: Ao final, um relatório completo é exibido, mostrando a contagem de carros para cada dia e destacando qual foi o "DIA DE PICO!".

Interface Limpa: Uma função é utilizada para limpar a tela do console antes de exibir o relatório final, funcionando tanto em ambiente Windows quanto em outros sistemas operacionais.


# Como Usar #

Para utilizar o programa, você precisará de um compilador de C (como o GCC).

Compilação
Salve o código em um arquivo (por exemplo, pedagio.c) e execute o seguinte comando no seu terminal:

Bash

gcc pedagio.c -o pedagio
Execução
Após compilar, execute o programa gerado:

Bash

./pedagio
O programa então solicitará a entrada de dados.
