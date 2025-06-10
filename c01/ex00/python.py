numero = 24

print(numero)

def troca_numero(numero_por_valor):
	numero_por_valor = 42
	print(f'o numero dentro da funcao eh {numero_por_valor}')
	print('sai da funcao')


troca_numero(numero)
print(numero)
