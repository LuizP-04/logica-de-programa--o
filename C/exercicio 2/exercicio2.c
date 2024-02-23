#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//abertura do bloco de codigo principal

    int n1, n2, n3;//introduz as variaveis inteiras chamanda n1, n2 e n3

    printf("digite 3 numeros inteiros: ");//mostra na tela um pedido para digitar 3 numeros inteiros
    scanf("%d %d %d", &n1, &n2, &n3);//recebe e armazena os numeros na variavel int
    
    if (n1 > n2 && n2 > n3)//condição que se n1 for maior que n2 e n3 seguesse o codigo
    {//abertura do codigo do if
        printf("%d e o maior numero", n1);//mostra na tela falando o maior numero
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do codigo do if
    if (n3 > n2 && n3 > n1)//condição que se n3 for maior que n2 e n1 seguesse o codigo
    {//abertura do codigo do if
        printf("%d e o maior numero", n3);//mostra na tela falando o maior numero
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do codigo do if
    else//se nenhuma das condições acima forem atendidas roda essse codigo
    {//fechamento do codigo do else
        printf("%d e o maior numero", n2);//mostra na tela falando o maior numero
        return 0;//retorna 0 e finaliza o codigo
    }//fechamento do codigo do else
}//fechamento do bloco de codigo principal