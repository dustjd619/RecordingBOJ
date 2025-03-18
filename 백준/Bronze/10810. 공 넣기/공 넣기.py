N, M = map(int, input().split())

num = [0] * N
for _ in range(M):
    i, j, k = map(int, input().split())
    for count in range(i - 1, j):
        num[count] = k

for m in num:
    print(m, end=" ")
