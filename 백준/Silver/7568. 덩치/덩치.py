N = int(input())
info = []
res = [1] * N

for _ in range(N):
    weight, height = map(int, input().split())
    info.append((weight, height))


for i in range(N):
    for j in range(N):
        if info[i][0] < info[j][0] and info[i][1] < info[j][1]:
            res[i] += 1

print(" ".join(map(str, res)))
