N, L = map(int, input().split())

p = []

# 튜플 형식으로 list에 입력 받기
for i in range(N):
    a, b = map(int, input().split())
    p.append((a, b))

p.sort()  # 오름차순 정렬

now = 0
cnt = 0
for i in range(N):
    s = max(now, p[i][0])
    e = p[i][1]

    if s >= e:
        continue

    gap = e - s

    if gap % L == 0:
        need = int(gap / L)
    else:
        need = int(gap / L) + 1

    cnt += need
    now = s + need * L


print(cnt)
