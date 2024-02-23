"""Elabore um programa que recebe dois números, armazene cada um deles em
variáveis distintas e, por fim, inverta o valor das variáveis e as apresente em tela. """

a, b = input().split() ; a, b = int(a), int(b)
print(a, b)
a,b = b,a
print(a, b)