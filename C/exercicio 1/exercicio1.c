#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 


int main()  {  //inicio do bloco de comando principal
    int idade;// cria uma variavel inteira chamada "idade"

    printf("escreva a sua idade: ");// imprime na tela para que a pessoa digite a propria idade
    scanf("%d", &idade);// int idade recebe o valor escrito no neste trecho

    while (idade < 0) // repetição caso a pessoa digite um numero menor que zero
    {
        printf("escreva a idade correta: ");// imprime na tela para que a pessoa digite uma idade corretamente
        scanf("%d", &idade);// int idade recebe o valor escrito no neste trecho

    }//fechamento do bloco while do codigo
    if(idade>=18){//caso a pessoa tenha mais ou igual a 18 anos vai rodar esse pequeno bloco de if

        printf("voce e um adulto.");// imprime na tela que voce e um adulto
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }//fechamento do bloco if do codigo
    if( idade>=12 & idade < 18){//caso a pessoa tenha mais ou igual a 12 e menos de 18 anos vai rodar esse pequeno bloco de if

        printf("voce e um adolescente.");// imprime na tela que voce e um adolescente
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    } //fechamento do bloco if2 do codigo
    else{//caso nenhum dos if's anteriores nao tenha sido atendidos, essa opcao ira rodar

        printf("voce e uma crinça.");// imprime na tela que voce e uma crianca
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }//fechamento do bloco else do codigo
    
    

}//fechamento do bloco principal do codigo

// by Luiz Augusto Passarinho