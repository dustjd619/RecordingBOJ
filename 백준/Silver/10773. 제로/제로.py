from collections import deque

K = int(input())

s = deque()
for _ in range(K):
    a = int(input())

    if a != 0:
        s.append(a)
    else:
        s.pop()

sum = 0
while s:
    sum += s.pop()

print(sum)
