N = int(input())

tri = []
for i in range(N):
    tri.append(int(input()))

tri.sort(reverse=True)

flag = False
for i in range(N - 2):
    if tri[i] < tri[i + 1] + tri[i + 2]:
        print(tri[i] + tri[i + 1] + tri[i + 2])
        flag = True
        break

if not flag:
    print(-1)
