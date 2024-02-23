"""Escreva um programa em Python que lê 15 valores reais, encontra o maior e o menor
deles e mostra o resultado."""

def entrada_de_valores():
    valores=[]
    vezes = int(input("insira quantos números você deseja usar: "))
    while len(valores) < vezes:
        numeros = int(input(f"digite o {len(valores)+1}º numero: "))
        if numeros not in valores:
            valores.append(numeros)
        else:
            print("valor já digitado.")
    return valores
def exibir_maior_menor(valores):
    maior = max(valores)
    menor = min(valores)
    print(f"o maior valor desses é {maior} e o menor {menor}")

numero = entrada_de_valores()
mostrar = exibir_maior_menor(numero)