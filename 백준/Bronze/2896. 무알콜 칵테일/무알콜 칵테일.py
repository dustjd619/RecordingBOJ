A, B, C = map(int, input().split())
I, J, K = map(int, input().split())

num = min(A / I, B / J, C / K)

print(A - I * num, B - J * num, C - K * num)
