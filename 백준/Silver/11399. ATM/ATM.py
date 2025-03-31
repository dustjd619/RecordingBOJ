N = int(input())
time = list(map(int, input().split()))

time.sort()

a = 0
res = 0
for i in range(N):
    a += time[i]
    res += a

print(res)
