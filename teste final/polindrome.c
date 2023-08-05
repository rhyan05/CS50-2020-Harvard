def min_contractions_to_palindrome(N, L):
    operations = 0

    for i in range(N // 2):
        if L[i] != L[N - i - 1]:
            diff = abs(L[i] - L[N - i - 1])
            operations += diff

    return operations

# Leitura da entrada
N = int(input())
elements = list(map(int, input().split()))  # Renomeando a variável

result = min_contractions_to_palindrome(N, elements)  
print(result)
