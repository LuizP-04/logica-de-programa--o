"""Escreva um algoritmo que lê dois valores booleanos (lógicos) e então determina se
ambos são VERDADEIROS ou FALSOS"""

a, b = input("insira dois valores: ").split(); a, b = int(a), int(b)
c = a>b
print(c)