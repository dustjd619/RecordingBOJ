import sys
from collections import deque

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())

a = deque(range(1, N + 1))


while len(a) != 1:
    a.popleft()
    a.rotate(-1)

print(str(a[0]))
