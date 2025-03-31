n = int(input())
num = list(map(int, input().split()))
x = int(input())

num.sort(reverse=True)


cnt = 0
l = 0
r = n - 1
while l < r:
    if num[l] + num[r] == x:
        cnt += 1
        l += 1
        r -= 1
    elif num[l] + num[r] > x:
        l += 1
    else:
        r -= 1

print(cnt)
