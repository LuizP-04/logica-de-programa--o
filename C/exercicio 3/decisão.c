#include <stdio.h>
#include <stdlib.h>

int main(){
    int decisao;

    printf("falando sobre decisao, se eu por 1, vai sair 'ola mundo', se eu por qualquer coisa menos 1 sera 'hello world'\ninsira o numero:");
    scanf("%d", &decisao);

    if (decisao == 1)
    {
        printf("ola mundo");
    } else{
        printf("hello world");
    }
    

    return 0;
}