N = int(input())


for j in range(1, N + 1):
    print("*" * (j - 1), end="")
    print("*", end="\n")


for i in range(N - 1, 0, -1):
    print("*" * (i - 1), end="")
    print("*", end="\n")