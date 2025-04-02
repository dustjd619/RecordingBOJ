T = int(input())

for _ in range(T):
    N = int(input())
    s = []
    for i in range(N):
        a, b = map(int, input().split())
        s.append((a, b))

    s.sort()

    cnt = 1
    highrank = s[0][1]
    for i in range(N):
        if highrank > s[i][1]:
            cnt += 1
            highrank = s[i][1]

    print(cnt)
