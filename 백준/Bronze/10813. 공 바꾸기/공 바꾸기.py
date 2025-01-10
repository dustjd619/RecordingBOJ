N, M = map(int, input().split())

num = list(range(1, N + 1))

for _ in range(M):
    i, j = map(int, input().split())
    num[i - 1], num[j - 1] = num[j - 1], num[i - 1]

for a in num:
    print(a, end=" ")
