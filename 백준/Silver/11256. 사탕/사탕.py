T = int(input())

for i in range(T):
    J, N = map(int, input().split())
    box = list()

    for i in range(N):
        r, c = map(int, input().split())
        box.append(r * c)

    box.sort(reverse=True)  # 내림차순 정렬

    res = 0
    cnt = 0
    for i in range(N):
        res += box[i]
        cnt += 1
        if res >= J:
            break

    print(cnt)
