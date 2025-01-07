from collections import deque

N, K = map(int, input().split())
num = deque(range(1, N + 1))

result = []

while num:
    num.rotate(-(K - 1))
    result.append(num.popleft())

print("<" + ", ".join(map(str, result)) + ">")
