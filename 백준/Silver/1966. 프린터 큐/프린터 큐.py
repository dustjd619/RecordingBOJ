import sys
from collections import deque

input = sys.stdin.readline
print = sys.stdout.write

T = int(input())

for i in range(T):
    N, M = map(int, input().split())
    rank = deque([(p, i) for i, p in enumerate(map(int, input().split()))])

    count = 0
    while rank:
        if any(rank[j][0] > rank[0][0] for j in range(1, len(rank))):
            rank.rotate(-1)
        else:
            count += 1
            if rank.popleft()[1] == M:
                print(str(count) + "\n")
            else:
                continue
