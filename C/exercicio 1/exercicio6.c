#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

int main(){//inicio do bloco de comando principal
    char operacao;// define uma variavel do tipo char  
    int num1, num2;// define uma variavel inteira

    printf("digite a operacao desejada:\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao");//pede para que seja digitado o estado desejado
    operacao = getchar();//pega qual foi o resultado ditiado a cima
    printf("digite dois numeros um do lado do outro: ");// mostra como e pro usuraio digitar os numeros da operacao
    scanf("%d %d", &num1, &num2);//recebe e armazena os numeros
    

    switch (operacao)//pega o valor e compara com o em cada caso
    {//abertura do switch
    case '1'://caso o numero selecionado seja 1 ele executa esse caso
        printf("digite dois numeros oara sere somados: ");// mostra como e pro usuraio digitar os numeros da operacao
        scanf("%d %d", &num1, &num2);//recebe e armazena os numeros
        printf("o resultado e %d", num1 + num2);//mostra o resultado na tela
        break;//fanaliza caso seja esse o caso
    case '2'://caso o numero selecionado seja 2 ele executa esse caso
        printf("digite dois numeros para serem divididos: ");// mostra como e pro usuraio digitar os numeros da operacao
        scanf("%d %d", &num1, &num2);//recebe e armazena os numeros
        printf("o resultado e %d", num1 - num2);//mostra o resultado na tela
        break;//fanaliza caso seja esse o caso
    case '3'://caso o numero selecionado seja 3 ele executa esse caso
        printf("digite dois numeros para serem multiplicados: ");// mostra como e pro usuraio digitar os numeros da operacao
        scanf("%d %d", &num1, &num2);//recebe e armazena os numeros
        printf("o resultado e %d", num1 * num2);//mostra o resultado na tela
        break;//fanaliza caso seja esse o caso
    case '4'://caso o numero selecionado seja 4 ele executa esse caso
        printf("digite dois numeros primeiro o que vai ser dividido e depois o divisor: ");// mostra como e pro usuraio digitar os numeros da operacao
        scanf("%d %d", &num1, &num2);//recebe e armazena os numeros
        printf("o resultado e %d", num1 / num2);//mostra o resultado na tela
        break;//fanaliza caso seja esse o caso
    }// fechamento do switch

    return 0;// finaliza o codigo

}//final do bloco principal
//by Luiz Augsuto Passarinho