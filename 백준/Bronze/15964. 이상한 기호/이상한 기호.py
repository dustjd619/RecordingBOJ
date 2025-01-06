x, y = map(int, input().split())


def cal(a, b):
    result = (a + b) * (a - b)
    return result


print(cal(x, y))
