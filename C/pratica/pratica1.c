#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int mult(int n1, int n2) { return n1 * n2; }
int dv(int n1, int n2) { return n1 / n2; }
int divr(int n1, int n2) { return n1 % n2; }

int main()
{

    int n1, n2, r;
    char op;

    printf("digite sua operacao matematica:\n1 - soma.\n2 - subtracao.\n3 - multiplicacao.\n4 - divisao com numero inteiro e resto.\n5 - para divisao com valores decimais.\nponha a opercao desejada:");
    op = getchar();

    printf("insira o valor para a: ");
    scanf("%d", &n1);
    printf("insira o valor para b: ");
    scanf("%d", &n2);

    while (n2 == 0)
    {
        printf("valor de b tem que ser diferente de 0\n reinsira o valor:");
        scanf("%d", &n2);
    }
    switch (op)
    {
    case '1':
        r = soma(n1, n2);
        break;
    case '2':
        r = sub(n1, n2);
        break;
    case '3':
        r = mult(n1, n2);
        break;
    case '4':
        printf("o valor inteiro da divisao e %d\ne o resto e %d", n1 / n2, n1 % n2);

        return 0;

        break;
    case '5':
        printf("o resultado e %f", n1 / n2);

        return 0;

        break;
    }

    printf("o resultado é %d", r);

    return 0;
}