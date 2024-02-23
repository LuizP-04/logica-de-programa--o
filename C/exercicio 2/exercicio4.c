#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de codigo principal

    int n1;//introduz a variavel inteira chamanda n1

    printf("digite um numero inteiro: ");//mstra na tela um pedido para digitar um nmero inteiro
    scanf("%d", &n1);//recebe e armazena os numeros na variavel int
    
    if ( n1==2 || n1 ==3 || n1 == 0)// se n1 for igual a 2, 3 e 0 o numero é primo
    {//abertura do codigo do if
        printf("numero e primo.");//mostra na tela falando que o numero é primo
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if (n1 % 2 == 0 || n1 % 3 == 0 )//condição que se  n1 dividio por 2, 3 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero nao e primo.");//mostra na tela falando que o numero é primo
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    else
    {//fechamento do codigo do else
        printf("numero e primo.");//mostra na tela falando que o numero é primo
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do codigo do else
}//fechamento do bloco principal do codigo