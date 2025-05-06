from collections import deque

N = int(input())

a = deque(range(1, N + 1))


while len(a) != 1:
    a.popleft()
    a.rotate(-1)

print(str(a[0]))