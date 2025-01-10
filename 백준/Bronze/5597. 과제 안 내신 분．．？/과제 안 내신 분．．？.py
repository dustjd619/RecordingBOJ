stu = list(range(1, 31))

for i in range(28):
    num = int(input())
    if num in stu:
        stu.remove(num)

stu.sort()
print(stu[0])
print(stu[1])
