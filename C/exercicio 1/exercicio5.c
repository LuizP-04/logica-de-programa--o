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
    if(idade>=5 & idade <= 7){//caso a pessoa tenha entre 5 e 7 anos  vai reproduzir o codigo a seguir

        printf("Infantil A.");// imprime na tela que esta no grupo infantil A
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }//fechamento do bloco if do codigo
    if( idade>=8 & idade <= 10){///caso a pessoa tenha entre 8 e 10 anos  vai reproduzir o codigo a seguir

        printf("Infantil B");// imprime na tela que esta no grupo Infantil B
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    } //fechamento do bloco if2 do codigo
    if(idade>=11 & idade <= 13){//caso a pessoa tenha entre 11 e 13 anos  vai reproduzir o codigo a seguir

        printf("Juvenil A.");// imprime na tela que esta no grupo Juvenil A
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }//fechamento do bloco if do codigo
    if( idade>=14 & idade < 17){///caso a pessoa tenha entre 14 e 17 anos  vai reproduzir o codigo a seguir

        printf("Juvenil B");// imprime na tela que esta no grupo Juvenil B
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }
    else{//caso nenhum dos if's anteriores nao tenha sido atendidos, essa opcao ira rodar

        printf("Senior");// imprime na tela que esta no grupo senior
        return 0;// retorna 0 e finaliza o programa apos esse bloco ser rodado

    }//fechamento do bloco else do codigo
    
    

}//fechamento do bloco principal do codigo

// by Luiz Augusto Passarinho