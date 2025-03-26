A, B = map(int, input().split())

cnt = 1
while B > A:
    if B % 2 == 0:  # 짝수
        B //= 2
    elif B % 10 == 1:  # 마지막 자리 1
        B //= 10
    else:  # 짝수도 아니고 마지막 자리 1도 아님 or 연산 종료
        break
    cnt += 1

if B == A:
    print(cnt)
else:
    print(-1)
