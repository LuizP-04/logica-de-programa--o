#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 


int main(){//inicio do bloco de comando principal
    int voto;// cria uma variavel inteira chamada "idade"
    char j[20]="joao bizerra", m[20]="maria lourdes",z[20]="ze lele";//cria uma variavel chamda char com um espaço de 20 co o nome de cada candidato

    printf("escreva o numero do seu candidato: ");// vai mostrar na tela para voce por o numero do seu candidato
    scanf("%d", &voto);//vai pegar e armazenas o numero do seu candidato

    if (voto == 10){// inicio do bloco if, se caso o numero foi igual a 10 ele vai fazer oq o bloco a seguir manda

        printf("10 - %s\nvoto confirmado!", j);// vai mostra na tela o numero e o nome do candidato
        return 0;// retorna 0 e finaliza o programa

    }//final do bloco de if
    if (voto == 20){// inicio do bloco if, se caso o numero foi igual a 20 ele vai fazer oq o bloco a seguir manda

        printf("20 - %s\nvoto confirmado!", m);// vai mostra na tela o numero e o nome do candidato
        return 0;// retorna 0 e finaliza o programa

    }//final do bloco de if
    if (voto == 30){// inicio do bloco if, se caso o numero foi igual a 30 ele vai fazer oq o bloco a seguir manda

        printf("30 - %s\nvoto confirmado!", z);// vai mostra na tela o numero e o nome do candidato
        return 0;// retorna 0 e finaliza o programa

    }//final do bloco de if
    else{

        printf("voce votou nulo!!\nvoto confirmado!");//mostra na tela que seu voto foi nulo
        return 0;// retorna 0 e finaliza o programa

    }//final do bloco else  
    
}//final do codigo principal
//by Luiz Augusto Passarinho