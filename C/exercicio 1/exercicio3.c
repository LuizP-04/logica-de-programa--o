#include <stdio.h>  // diretivas de bibliotecas globais
#include <stdlib.h> //diretivas de bibliotecas globais 

const int val;/* estou nomeando a variavel inteira constante no progrma com o mesmo nome que ela tem no codigo, se que é inteira pois o se esta com numeros inteiros 
    diferentes de 1 e 0 sendo comparados com ela*/

int main(){//inicio do bloco de comando principal

    printf("digite um numero: ");
    scanf("%d", &val);// estou lendo um valor inteiro para val

    if (val >= 0 & val<= 16)//verificando que essa condicao e verdade caso seja ele executa o codigo
    {// inicio do bloco if
       
        printf("pertence 1");// mostra na tela que pertece a 1
    
    }//final do bloco de if
    else if(val>16 & val<25)//verificando que essa condicao e verdade caso seja ele executa o codigo
    {// inicio do bloco if

        printf("pertence 2");// mostra na tela que pertece a 2

    }//final do bloco de if
    
    return 0;// retorna 0 e finaliza o programa

}//final do bloco principal

/*
o programa mostra se o valor faz parte de 1 entre 0 e 16 ou 2 entre 17 e 24
o resto ele nao quer
*/
//by Luiz Augusto Passarinho