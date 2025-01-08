import sys
from collections import deque

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
a = deque()
for i in range(N):
    cmd = list(map(str, input().split()))

    if cmd[0] == "push":
        a.append(cmd[1])
    elif cmd[0] == "pop":
        if len(a) == 0:
            print("-1\n")
        else:
            print(str(a.popleft()) + "\n")
    elif cmd[0] == "size":
        print(str(len(a)) + "\n")
    elif cmd[0] == "empty":
        if a:
            print("0\n")
        else:
            print("1\n")
    elif cmd[0] == "front":
        if len(a) == 0:
            print("-1\n")
        else:
            print(str(a[0]) + "\n")
    else:
        if len(a) == 0:
            print("-1\n")
        else:
            print(str(a[-1]) + "\n")