data = []


for i in range(10):
    num = int(input())
    data.append(num%42)

data_count = list(set(data))


print(len(data_count))