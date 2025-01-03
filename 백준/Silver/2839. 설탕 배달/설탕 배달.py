# 2839. 설탕배달_2트
# 반복문으로..
import sys

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())

if N % 5 == 0:
    print(str(N // 5))
else:  # N이 5로 나누어 떨어지지 않을 때
    num = 0
    while N > 0:
        N -= 3  # 3 봉지가 최소가 되어야 하니까 3을 빼기
        num += 1
        if N % 5 == 0:  # 3,5로 조합 가능
            num += N // 5
            print(str(num))
            break
        elif N == 1 or N == 2:
            print("-1")
            break
        elif N == 0:  # 3으로 나눠떨어짐
            print(str(num))
            break
