N = int(input())

info = []
for _ in range(N):
    age, name = input().split()
    age = int(age)
    info.append((age, name))

info.sort(key=lambda x: x[0])

for age, name in info:
    print(age, name)