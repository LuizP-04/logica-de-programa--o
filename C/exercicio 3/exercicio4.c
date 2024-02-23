#include <stdio.h>// diretivas de bibliotecas globais
#include <stdlib.h>// diretivas de bibliotecas globais

int main() {
    char codigo;// define uma variavel do tipo char 

    
    printf("Por favor, insira o código do pedido: ");//mostra na tela o texto
    scanf("%d", &codigo);//recebe e armazena os numeros

    switch(codigo) {//pega o valor e compara com o em cada caso
        case 1://caso o numero selecionado seja for o mesmo dest caso, ele executa
            printf("Você escolheu: Pizza Margherita\n");//mostra na tela o texto
            break;//fanaliza caso seja esse o caso
        case 2://caso o numero selecionado seja for o mesmo dest caso, ele executa
            printf("Você escolheu: Espaguete Carbonara\n");//mostra na tela o texto
            break;//fanaliza caso seja esse o caso
        case 3://caso o numero selecionado seja for o mesmo dest caso, ele executa
            printf("Você escolheu: Salmão Grelhado\n");//mostra na tela o texto
            break;//fanaliza caso seja esse o caso
        case 4://caso o numero selecionado seja for o mesmo dest caso, ele executa
            printf("Você escolheu: Salada Caesar\n");//mostra na tela o texto
            break;//fanaliza caso seja esse o caso
        default://caso nenhum dos casos acima sema satisfeito ele roda
            printf("Código inválido. Por favor, insira um código válido.\n");//mostra na tela o texto
            break;//fanaliza caso seja esse o caso
    }

    return 0;// finaliza o codigo
}