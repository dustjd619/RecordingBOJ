N = int(input())
D = list(map(int, input().split()))

max_val = -1000000
min_val = 1000000

for i in D:
    if i > max_val:
        max_val = i
    if i < min_val:
        min_val = i


print(min_val, max_val)
