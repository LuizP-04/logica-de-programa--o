#include <stdio.h>// diretivas de bibliotecas globais
#include <stdio.h>// diretivas de bibliotecas globais

int main() {
    char cr;// define uma variavel do tipo char  

    printf("Por favor, insira um caractere: ");//mostra na tela o texto
    scanf(" %c", &cr);//recebe e armazena os numeros

    
    if (cr >= 'A' && cr <= 'Z') { // Converte o cr para minúsculo para facilitar a comparação
        cr += 32;
    }

    switch(cr) {//pega o valor e compara com o em cada caso
        case 'a'://caso a letra selecionada seja a ele executa esse caso
        case 'e'://caso a letra selecionada seja e ele executa esse caso
        case 'i'://caso a letra selecionada seja i ele executa esse caso
        case 'o'://caso a letra selecionada seja o ele executa esse caso
        case 'u'://caso a letra selecionada seja u ele executa esse caso
            printf("%c é uma vogal.\n", cr);//mostra o resultado na tela
            break;//fanaliza caso seja esse o caso
        default://caso nao seja nenhuma das hipoteses
            printf("%c é uma consoante.\n", cr);//mostra o resultado na tela
            break;//fanaliza caso seja esse o caso
    }

    return 0;// finaliza o codigo
}