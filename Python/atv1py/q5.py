"""Faça um algoritmo que encontre o dobro de um número caso ele seja positivo e o
seu triplo caso seja negativo, imprimindo o resultado."""

a = input("digite um valor: ")
if a<0:
    print("o triplo do seu numero é", a*3)
elif a>0:
    print("o dobro do seu numero é", a*2)
else:
    print("seu numero nao tem multiplos.")