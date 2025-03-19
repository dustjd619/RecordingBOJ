N = int(input())
K = int(input())

cnt = 0
for i in range(1, N + 1):
    sejun = True
    j = 2
    while i > 1:
        if j > K:  # 소인수가 K보다 큰 경우는 취급하지 않음
            sejun = False
            break
        if i % j == 0:  # 소인수 발견하면 나누기
            i /= j
        else:
            j += 1

    if sejun:
        cnt += 1

print(cnt)
