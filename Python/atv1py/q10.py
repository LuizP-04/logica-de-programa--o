"""Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um
aluno nas 3 verificações e a média dos exercícios ME que fazem parte da avaliação, e
calcule a média de aproveitamento MA, usando a fórmula: MA = (nota1 + nota 2 * 2 + nota
3 * 3 + ME)/7."""

def gb():
    global notas1

def inserir_notas():
    notas=[]
    while len(notas) < 4:
        notas1 = float(input(f"Digite a {len(notas)+1}ª nota: "))
        notas.append(notas1)
    return notas
def media(notas):
    notas[1]= notas[1]*2
    notas[2]= notas[2]*3
    soma = sum(notas)/7
    print(f"a media é de {soma:.2f}")
    if soma>=9 and soma<=10:
        print("aluno nota A")
    elif soma < 9 and soma >= 7.5:
        print("aluno nota B")
    elif soma < 7.5 and soma >= 6:
        print("aluno nota C")
    elif soma < 6 and soma >= 4:
        print("aluno nota D")
    elif soma < 4 and soma >= 0:
        print("aluno nota E")
    else:
        print("algum valor inserido está errado")


nota = inserir_notas()
resultado = media(nota)
