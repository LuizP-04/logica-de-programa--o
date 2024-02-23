#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de codigo principal

    int n1;//introduz a variavel inteira chamanda n1

    printf("digite um numero inteiro: ");//mstra na tela um pedido para digitar um nmero inteiro
    scanf("%d", &n1);//recebe e armazena os numeros na variavel int
    
    if (n1 > 0)//condição que se  n1 fi maior que zero seguesse o codigo
    {//abertura do codigo do if
        printf("numero positivo.");//mostra na tela falando que o numero é positivo
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if (n1 < 0)//condição que se  n1 for menor que zero seguesse o codigo
    {//abertura do codigo do if
        printf("numero negativo.");//mostra na tela falando que o numero é negativo
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    else//se nenhuma das condições acima forem atendidas roda essse codigo
    {//abertura do codigo do else
        printf("numero neutro.");//mostra na tela que o numero é neutro
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de else
}//fechamento do bloco principal do codigo