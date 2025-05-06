from collections import deque

N = int(input())

dq = deque()
for i in range(1, N + 1):
    dq.append(i)

while len(dq) != 0:
    print(dq[0], end=" ")  
    dq.popleft()

    if len(dq) != 0:
        a = dq[0]
        dq.popleft()
        dq.append(a)  



