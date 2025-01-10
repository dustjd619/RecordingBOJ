a, b = map(int, input().split())

A = int(str(a)[::-1])
B = int(str(b)[::-1])

res = [A, B]

print(max(res))
