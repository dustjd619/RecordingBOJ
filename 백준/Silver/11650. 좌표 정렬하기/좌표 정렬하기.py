import sys

input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
list = []

for i in range(N):
    a, b = map(int, input().split())
    list.append((a, b))

# for j in range(N):
#     for k in range(N):
#         list.sort(key=lambda x: x[0])
#         if list[j][0] == list[k][0]:
#             list.sort(key=lambda x: x[1])

list.sort(key=lambda x: (x[0], x[1]))

for t in list:
    print(str(t[0]) + " " + str(t[1]) + "\n")
