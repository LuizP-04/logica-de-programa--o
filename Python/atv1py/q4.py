"""Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais
deverá se somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos
cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela."""

a, b = input("bote 2 valores: ").split() ; a, b = int(a), int(b)
if a == b:
    c = a+b
    print("soma de A+B é igual a", c)
else:
    c = a*b
    print("produto de A.B é igual a", c)