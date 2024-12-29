import sys

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
A = set(map(int, input().split()))

M = int(input())
B = list(map(int, input().split()))


for i in range(len(B)):
    if B[i] in A:
        B[i] = 1
    else:
        B[i] = 0

for j in B:
    print(str(j) + "\n")
