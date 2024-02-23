#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de codigo principal

    int nota; //declara a variavel nota
    scanf("%d", &nota); //recebe a variavel nota 

    if (nota >= 7 && nota < 11 )// se a nota for maior ou igual a 7 e menor que 11 segue o codigo  
    {//abertura d bloco de if
        printf("nota suficiente");//mostra na tela o texto
        return 0;//retorna 0 e finaliza o codgio
    }//fechamento do bloco if
    if (nota >= 4 && nota < 7 )// se a nota for maior ou igual a 4 e menor que 7 segue o codigo  
    {//abertura d bloco de if
        printf("nota media");//mostra na tela o texto
        return 0;//retorna 0 e finaliza o codgio
    }//fechamento do bloco if
    if (nota < 4 )// se a nota for menor que 4 segue o codigo  
    {//abertura d bloco de if
        printf("nota insuficiente");//mostra na tela o texto
        return 0;//retorna 0 e finaliza o codgio
    }//fechamento do bloco if
    else// se nenhuma das acima forem satisfeitas roda esse codigo
    {//abertura do else
        printf("nota invalida");//mostra na tela o texto
        return 0;//retorna 0 e finaliza o codgio
    }//fechamento do else
    
    
}//fechamento do bloco principal do codigo