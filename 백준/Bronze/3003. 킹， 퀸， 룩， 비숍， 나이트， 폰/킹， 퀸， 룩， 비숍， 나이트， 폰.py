ans = [1, 1, 2, 2, 2, 8]

cur = list(map(int, input().split()))

for i in range(len(cur)):
    ans[i] = ans[i] - cur[i]

print(" ".join(map(str, ans)))
