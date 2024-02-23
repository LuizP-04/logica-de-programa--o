#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de comando principal
    char estado;// define uma variavel do tipo char  
    int valor;// define uma variavel inteira
   
    printf("digite seu estado:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");//pede para que seja digitado o estado desejado
    estado = getchar();
    printf("digite o valor do produto: ");// exibe na tela para que se digite o valor do produto
    scanf("%d", &valor);// int idade recebe o valor escrito no neste trecho

    switch (estado)
    {
    case '1'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("voce escolheu Minas Gerais\nOvalor do imposto sobre o produto e de 7 por cento\nO valor total e de %.2f", valor*1.07);//mostra na tela o estado selecionado, o tanto de porcentagem, eo valot total
        break;//finaliza se o caso rodar e estiver satisfeito
    case '2'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("voce escolheu Sao Paulo\nOvalor do imposto sobre o produto e de 12 por cento\nO valor total e de %.2f", valor*1.12);//mostra na tela o estado selecionado, o tanto de porcentagem, eo valot total
        break;//finaliza se o caso rodar e estiver satisfeito
    case '3'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("voce escolheu Rio de Janeiro\nOvalor do imposto sobre o produto e de 15 por cento\nO valor total e de %.2f", valor*1.15);//mostra na tela o estado selecionado, o tanto de porcentagem, eo valot total
        break;//finaliza se o caso rodar e estiver satisfeito
    case '4'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("voce escolheu Mato Grosso do Sul\nOvalor do imposto sobre o produto e de 8 por cento\nO valor total e de %.2f", valor*1.08);
        break;
    default://caso nenhum dos casos acima sema satisfeito ele roda
        printf("erro\nestado numero selecionado nao existe");//mostra erro caso nenhuma das opcoes acima for satisfeita
        break;//finaliza se o caso rodar e estiver satisfeito
    }
    

}//final do bloco principal
//by Luiz Augsuto Passarinho

