N = int(input())
num = list(map(int, input().split()))
v = int(input())

count = 0
for i in num:
    if i == v:
        count += 1

print(count)
