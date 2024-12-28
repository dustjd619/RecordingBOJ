orders = []
for i in range(3):
    order = input()
    orders.append(order)

for i in range(2, -1, -1):
    if orders[i].isdigit():
        res = int(orders[i]) + (3 - i)
        break

if res % 15 == 0:
    print("FizzBuzz")
elif res % 3 == 0:
    print("Fizz")
elif res % 5 == 0:
    print("Buzz")
else:
    print(res)
