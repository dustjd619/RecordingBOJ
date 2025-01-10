N, M = map(int, input().split())
num = list(range(1, N + 1))

for _ in range(M):
    i, j = map(int, input().split())
    sub = num[i - 1 : j]
    num[i - 1 : j] = sub[::-1]

print(" ".join(map(str, num)))
