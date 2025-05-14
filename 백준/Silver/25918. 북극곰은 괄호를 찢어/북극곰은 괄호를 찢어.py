from collections import deque

N = int(input())

s = deque()
a = input()

day = 0
for i in range(len(a)):
    if not s or s[-1] == a[i]:
        s.append(a[i])
    else:
        s.pop()

    if len(s) > day:
        day = len(s)

if s:
    print(-1)
else:
    print(day)
