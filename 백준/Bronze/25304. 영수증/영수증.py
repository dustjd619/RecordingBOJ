X = int(input())
N = int(input())

sum = 0
for _ in range(N):
    price, num = map(int, input().split())
    sum += price * num

if X == sum:
    print("Yes")

else:
    print("No")
