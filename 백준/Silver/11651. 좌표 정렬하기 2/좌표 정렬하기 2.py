import sys

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
num = []

for _ in range(N):
    a, b = map(int, input().split())
    num.append((a, b))

num.sort(key=lambda x: (x[1], x[0]))

for a, b in num:
    print(f"{a} {b}\n")
