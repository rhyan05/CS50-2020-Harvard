tamanhos_solicitados = []
    # Leitura dos valores
n = int(input())  # Número de premiados
tamanhos_solicitados = int, input().split()  # Tamanhos solicitados
p = int(input())  # Número de camisetas de tamanho pequeno
m = int(input())  # Número de camisetas de tamanho médio

    # Contagem dos tamanhos solicitados
contagem_tamanho_pequeno = tamanhos_solicitados.count(1)
contagem_tamanho_medio = tamanhos_solicitados.count(2)

    # Mostrar a quantidade de camisetas disponíveis
print("Quantidade de camisetas pequenas:", p)
print("Quantidade de camisetas médias:", m)

    # Verificação se todos os premiados podem ser atendidos
if contagem_tamanho_pequeno <= p and contagem_tamanho_medio <= m:
  print('S')  # Todos os premiados serão atendidos
else:
  print('N')  # Nem todos os premiados poderão ser atendidos
