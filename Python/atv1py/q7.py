"""Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso
seja ímpar, imprimir o resultado desta operação."""

a = int(input("insira um numero: "))
if (a%2) == 0:
    a += 5
    print(a)
else:
    a += 8
    print(a)