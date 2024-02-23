"""Faça um programa em Python para exibir a tabuada de 0 a 9."""

def mult():
    numero = int(input("qual tabuada você deseja fazer? "))
    r = 0
    for r in range(0,10):
        print(f"{numero}.{r}={numero*r}")
        r+=1

multiplicação = mult()