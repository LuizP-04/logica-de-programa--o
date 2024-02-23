#include <stdio.h>// diretivas de bibliotecas globais
#include <stdio.h>// diretivas de bibliotecas globais

int main(){

    char dia_semana;// define uma variavel do tipo char

    printf("escreva o numero correspondente a epoca do ano: ");//mostra na tela o texto
    dia_semana = getchar();//pega qual foi o resultado ditiado a cima

    switch (dia_semana)//pega o valor e compara com o em cada caso
    {
    case '1'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("inverno");//mostra na tela o texto
        break;//fanaliza caso seja esse o caso
    case '2'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("verao");//mostra na tela o texto
        break;//fanaliza caso seja esse o caso
    case '3'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("primavera");//mostra na tela o texto
        break;//fanaliza caso seja esse o caso
    case '4'://caso o numero selecionado seja for o mesmo dest caso, ele executa
        printf("outono");//mostra na tela o texto
        break;//fanaliza caso seja esse o caso
        
    default://caso nenhum dos casos acima sema satisfeito ele roda
        printf("insira um valor valido!");//mostra na tela o texto
        break;//fanaliza caso seja esse o caso
    }
    return 0;// finaliza o codigo
}