N, X = map(int, input().split())
F = list()

sum = 0
for i in range(N):
    a, b = map(int, input().split())
    F.append((a, b))
    sum += b
    X -= 1000

F.sort(key=lambda x: x[0] - x[1], reverse=True)

for i in range(N):
    if X >= 4000 and F[i][0] - F[i][1] > 0:
        sum = sum - F[i][1] + F[i][0]
        X -= 4000
    else:
        break

print(sum)
