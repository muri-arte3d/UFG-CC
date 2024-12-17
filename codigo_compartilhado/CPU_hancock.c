#include <stdio.h>

//aqui serão armazenadas as possibilidades pré feitas

    void opcoes(){
        //exibe opções a serem colocadas no menu

        //Consumo
        printf("\nConsumo de energia:\n");
        printf("A - Alto\n");
        printf("M - Médio\n");
        printf("B - Baixo\n");

        //Desempenho
        printf("\nDesempenho:\n");
        printf("R - Rápido\n");
        printf("B - Balanceado\n");

        //Custo
        printf("\nCusto da CPU:\n");
        printf("1 - Alto\n");
        printf("2 - Acessível\n");
        printf("3 - Baixo\n");

        //função
        printf("\nTipo de aplicação:\n");
        printf("I - IoT\n");
        printf("J - Jogos\n");
        printf("P - Programação\n");
        printf("E - Estudos\n");

    }

void menu(char energia, char desempenho, char custo, char funcao){
//lógicas para criar o menu de escolha 

    //ler o consumo de energia
    switch(energia){
        case 'A':
            printf("Consumo de energia: Alto\n");
            break;
        case 'M':
            printf("Consumo de energia: Médio\n");
            break;
        case 'B':
            printf("Consumo de energia: Baixo\n");
            break;
        default:
            printf("Opção de consumo de energia inválida. \n");
            return;
    }
    //analise do custo desejado pelo usuário
    switch(custo){
        case '1':
            printf("Custo da CPU: Alto\n");
            break;
        case '2':
            printf("Custo da CPU: Acessível\n");
            break;
        case '3':
            printf("Custo da CPU: Baixo\n");
        default:
            printf("Opção de custo da CPU inválida. \n");
            return;

    }



    //analise da motivação do usuário para o uso
    switch(funcao){
        case 'I':
            printf("Tipo de aplicação: IoT\n");
            break;
        case 'J':
            printf("Tipo de aplicação: Jogos\n");
            break;
        case 'P':
            printf("Tipo de aplicação: Programação\n");
            break;
        case 'E':
            printf("Tipo de aplicação: Estudos\n");
            break;
        default:
            printf("Opção de tipo de aplicação inválida. \n");
            return; 
    }
    
    //analise de desempenho
    switch(desempenho){
        case 'R':
            printf("Desempenho Rápido\n");
            break;
        case 'B':
            printf("Desempenho: Balanceado\n");
        default:
            printf("Opção de desempenho inválida.\n");
            return;

    }
}
    
    


void recomendarPC(char energia, char desempenho, int custo, char funcao) {
    // Variáveis para a configuração do PC
    char *configuracao;

    // Baseado nas respostas, decide a recomendação
    if (energia == 'A' && desempenho == 'R' && custo == 1 && funcao == 'J') {
        configuracao = "Configuração recomendada: \nCPU: Intel i9 13900K\nPlaca de Vídeo: NVIDIA RTX 4090\nMemória RAM: 32GB DDR5\nFonte: 1000W\nIdeal para jogos de alta performance!";
    } 
    else if (energia == 'A' && desempenho == 'R' && custo == 1 && funcao == 'P') {
        configuracao = "Configuração recomendada: \nCPU: Intel i9 13900K\nPlaca de Vídeo: NVIDIA RTX 4090\nMemória RAM: 32GB DDR5\nFonte: 1000W\nIdeal para programação intensa e multitarefas.";
    }
    else if (energia == 'A' && desempenho == 'R' && custo == 3 && funcao == 'I') {
        configuracao = "Configuração recomendada: \nCPU: AMD Ryzen 7 7800X\nPlaca de Vídeo: AMD Radeon RX 6800\nMemória RAM: 16GB DDR5\nFonte: 800W\nIdeal para IoT e aplicações intensas.";
    }
    else if (energia == 'A' && desempenho == 'B' && custo == 3 && funcao == 'J') {
        configuracao = "Configuração recomendada: \nCPU: Intel i7 12700K\nPlaca de Vídeo: NVIDIA RTX 3060 Ti\nMemória RAM: 16GB DDR4\nFonte: 750W\nIdeal para jogos em 1440p e médio desempenho.";
    }
    else if (energia == 'A' && desempenho == 'B' && custo == 1 && funcao == 'P') {
        configuracao = "Configuração recomendada: \nCPU: Intel i7 12700K\nPlaca de Vídeo: NVIDIA RTX 3060 Ti\nMemória RAM: 16GB DDR4\nFonte: 750W\nIdeal para programação e multitarefa.";
    }
    else if (energia == 'M' && desempenho == 'R' && custo == 1 && funcao == 'E') {
        configuracao = "Configuração recomendada: \nCPU: Intel i7 12700K\nPlaca de Vídeo: NVIDIA RTX 3070\nMemória RAM: 16GB DDR4\nFonte: 750W\nIdeal para estudos e tarefas mais exigentes.";
    }
    else if (energia == 'M' && desempenho == 'R' && custo == 3 && funcao == 'J') {
        configuracao = "Configuração recomendada: \nCPU: Intel i7 11700K\nPlaca de Vídeo: NVIDIA GTX 1660 Ti\nMemória RAM: 16GB DDR4\nFonte: 650W\nIdeal para jogos em Full HD com bom desempenho.";
    }
    else if (energia == 'M' && desempenho == 'B' && custo == 1 && funcao == 'E') {
        configuracao = "Configuração recomendada: \nCPU: Intel i5 12600K\nPlaca de Vídeo: NVIDIA GTX 1660 Ti\nMemória RAM: 8GB DDR4\nFonte: 600W\nIdeal para estudos e tarefas cotidianas.";
    }
    else if (energia == 'M' && desempenho == 'B' && custo == 3 && funcao == 'P') {
        configuracao = "Configuração recomendada: \nCPU: Intel i5 12400\nPlaca de Vídeo: Integrada\nMemória RAM: 8GB DDR4\nFonte: 500W\nIdeal para programação leve e tarefas simples.";
    }
    else if (energia == 'B' && desempenho == 'R' && custo == 1 && funcao == 'I') {
        configuracao = "Configuração recomendada: \nCPU: Intel i7 12700K\nPlaca de Vídeo: NVIDIA RTX 3060 Ti\nMemória RAM: 16GB DDR4\nFonte: 750W\nIdeal para IoT e aplicações exigentes.";
    }
    else if (energia == 'B' && desempenho == 'R' && custo == 3 && funcao == 'J') {
        configuracao = "Configuração recomendada: \nCPU: AMD Ryzen 5 5600X\nPlaca de Vídeo: NVIDIA GTX 1650\nMemória RAM: 8GB DDR4\nFonte: 500W\nIdeal para jogos leves e tarefas cotidianas.";
    }
    else if (energia == 'B' && desempenho == 'B' && custo == 3 && funcao == 'E') {
        configuracao = "Configuração recomendada: \nCPU: AMD Ryzen 5 5600G\nPlaca de Vídeo: Integrada\nMemória RAM: 8GB DDR4\nFonte: 500W\nIdeal para estudos e tarefas leves.";
    }
    else if (energia == 'B' && desempenho == 'B' && custo == 1 && funcao == 'P') {
        configuracao = "Configuração recomendada: \nCPU: Intel i5 12400\nPlaca de Vídeo: Integrada\nMemória RAM: 8GB DDR4\nFonte: 600W\nIdeal para programação simples e baixo custo.";
    }
    else {
        configuracao = "Configuração padrão: \nCPU: Intel i5 12400\nPlaca de Vídeo: Integrada\nMemória RAM: 8GB DDR4\nFonte: 600W\nIdeal para uso geral.";
    }

    // Exibe a recomendação
    printf("\nCom base nas suas escolhas, aqui está a recomendação de configuração:\n%s\n", configuracao);
}

    int main(){
        char energia, desempenho, funcao;
        int custo;
        opcoes();

        printf("Qual o consumo de energia que você deseja?");
        scanf(" %c", &energia);

        printf("Qual o desempenho desejado?");
        scanf(" %c", &desempenho);

        printf("Qual o custo da CPU desejado");
        scanf(" %d", &custo);

        printf("Qual a função dele?");
        scanf(" %c", &funcao);

        recomendarPC(energia, desempenho, custo, funcao);

        return 0;
    }







