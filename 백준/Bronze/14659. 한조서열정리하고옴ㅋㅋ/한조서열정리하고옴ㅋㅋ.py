N = int(input())
H = list(map(int, input().split()))

res = H[0]
cnt = 0
maxcnt = 0

for i in range(1, len(H)):
    if H[i] > res:
        res = H[i]

        if maxcnt < cnt:
            maxcnt = cnt

        cnt = 0
        continue
    cnt += 1

if maxcnt < cnt:
    maxcnt = cnt

print(maxcnt)
