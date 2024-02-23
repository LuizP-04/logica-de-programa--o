"""Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em
ordem decrescente"""

def entrada_numeros():
    vezes = int(input("digite quantos numeros deseja ordenar: "))
    valores = []
    while len(valores) < vezes:
        numeros = int(input(f"digite o {len(valores)+1} numero: "))
        if numeros not in valores:
            valores.append(numeros)
        else:
            print("esse valor ja foi digitado!")
    return valores
def ordenar_decrescente(valores):
    valores.sort(reverse=True)
    return valores
def exibir_ordem_decrescente(valores):
    print("Valores em ordem decrescente:", end=" ")
    for numeros in valores:
        print(numeros, end=" ")

valores = entrada_numeros()
valores_decrecentes = ordenar_decrescente(valores)
exibir_ordem_decrescente(valores_decrecentes)