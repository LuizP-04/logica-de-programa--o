#include <stdio.h> // diretivas de bibliotecas globais
#include <stdlib.h>// diretivas de bibliotecas globais
#include <stdlib.h>//diretivas de bibliotecas globais 

int main(){//inicio do bloco de bloco principal
    
   char diaSemana[20];  // Declara uma variável para armazenar o dia da semana

    printf("Digite o dia da semana:\n ex:'segunda-feira': ");  // Exibe a tela o texto
    scanf("%s", diaSemana);  // Lê o dia da semana digitado


    // Compara a entrada com os dias da semana e imprime o dia seguinte correspondente
    if (strcmp(diaSemana, "domingo") == 0) {//abertura do bloco de if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e segunda-feira.\n");
    }//fechamento do bloco if
     else if (strcmp(diaSemana, "segunda-feira") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e terca-feira.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else if (strcmp(diaSemana, "terca-feira") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e quarta-feira.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else if (strcmp(diaSemana, "quarta-feira") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e quinta-feira.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else if (strcmp(diaSemana, "quinta-feira") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e sexta-feira.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else if (strcmp(diaSemana, "sexta-feira") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e sabado.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else if (strcmp(diaSemana, "sabado") == 0) {//abertura do bloco de else if srcmp compara com o segundo caso sejam iguais
        printf("O dia seguinte e domingo.\n");// Exibe a tela o texto
    }//fechamento do bloco else if
     else {//abertura do bloco de else
        printf("Dia da semana invalido.\n");// Exibe a tela o texto //se nao for satisfeita nenhuma das acima o program encerra
    }//fechamento do bloco de else

    return 0;//Retorna 0 e finaliza o programa
}//fechamento do bloco principal do bloco