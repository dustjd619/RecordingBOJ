A, B = map(int, input().split())

cnt = 0


def count(n):
    global cnt

    if A <= n <= B:
        cnt += 1
    elif n > B:
        return 0

    count(10 * n + 4)
    count(10 * n + 7)


count(0)
print(cnt)
