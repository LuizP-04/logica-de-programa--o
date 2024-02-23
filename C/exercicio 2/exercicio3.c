#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de codigo principal

    int n1;//introduz a variavel inteira chamanda n1

    printf("digite um numero inteiro: ");//mstra na tela um pedido para digitar um nmero inteiro
    scanf("%d", &n1);//recebe e armazena os numeros na variavel int
    
    if (n1 % 2 == 0 && n1 % 3 == 0 && n1 % 5 == 0)//condição que se  n1 dividio por 2, 3 e 5 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 2 3 e 5.");//mostra na tela falando que o numero é divisivel por 2 3 e 5
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if (n1 % 2 == 0 && n1 % 3 == 0 )//condição que se  n1 dividio por 2 e 3 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 2 e 3.");//mostra na tela falando que o numero é divisivel por 2 e 3
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if (n1 % 2 == 0 && n1 % 5 ==  0)//condição que se  n1 dividio por 2 e 5 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 2 e 5.");//mostra na tela falando que o numero é divisivel por 2 e 5
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if ( n1 % 3 == 0 && n1 % 5 == 0)//condição que se  n1 dividio por 3 e 5 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 3 e 5.");//mostra na tela falando que o numero é divisivel por 3 e 5
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if (n1 % 2 == 0 )//condição que se  n1 dividio por 2 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 2.");//mostra na tela falando que o numero é divisivel por 2
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if ( n1 % 3 == 0 )//condição que se  n1 dividio por 3 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 3.");//mostra na tela falando que o numero é divisivel por 3
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
    if ( n1 % 5 == 0)//condição que se  n1 dividio por 5 tiver resto 0 segue o codigo a baixo
    {//abertura do codigo do if
        printf("numero e divisivel por 5.");//mostra na tela falando que o numero é divisivel por 5
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do bloco de if
}//fechamento do bloco principal do codigo