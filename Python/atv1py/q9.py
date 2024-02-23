"""Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o preço normal de etiqueta e a escolha da condição de preco. Utilize
os códigos da tabela a seguir para ler qual a condição de preco escolhida e efetuar o
cálculo adequado."""
def gb():
    global preco
def din_chec():
    print(f"total a pagar é de: R${preco*0.9:.2f}")
    return 0
def cartao_1():
    print(f"total a pagar é de: R${preco*0.85:.2f}")
    return 0
def cartao_2():
    print(f"total a pagar é de: R${preco:.2f}")
    return 0
def cartao_4():
    print(f"total a pagar é de: R${preco*1.1:.2f}", )
    return 0

preco = float(input("digite o preco do item: "))
pagamento = input("digite a forma de preco\n1 - dinheiro ou cheque\n2 - crédito à vista\n3 - crédito em 2x\n4 - crédito em 4x\nSelecione a opção desejada: ")
if pagamento == '1':
    print("o item tem desconto de 10% neste tipo de pagamento")
    din_chec()
elif pagamento == '2':
    print("o item tem desconto de 15% neste tipo de pagamento")
    cartao_1()
elif pagamento == '3':
    print("o item não tem alteração de preco")
    cartao_2()
elif pagamento == '4':
    print("o item tem acresimo de 10% neste tipo de pagamento")
    cartao_4()
else:
    print("opção de pagamento invalida")