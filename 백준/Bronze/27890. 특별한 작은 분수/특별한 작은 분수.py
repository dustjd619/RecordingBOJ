import sys

input = sys.stdin.readline
print = sys.stdout.write

x, N = map(int, input().split())

for i in range(N):
    if x % 2 == 0:
        x = (x // 2) ^ 6

    else:
        x = (2 * x) ^ 6

print(str(x))
