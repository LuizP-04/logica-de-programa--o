"""Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B
é menor que C."""
a, b, c =input("bote os valores de A, B e C ").split() ;  a, b, c = int(a), int(b), int(c)
if (a+b)<c:
    print(a+b,"menor do que", c)
elif (a+b)>c:
    print(a+b,"maior do que", c)