import sys

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
num = []


for _ in range(N):
    num.append(int(input()))

num = sorted(num)

for i in num:
    print(str(i) + "\n")