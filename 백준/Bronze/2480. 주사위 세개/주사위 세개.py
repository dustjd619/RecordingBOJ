a, b, c = map(int, input().split())

if len(set([a, b, c])) == 1:
    print(10000 + a * 1000)

elif len(set([a, b, c])) == 2:
    for i in [a, b, c]:
        if [a, b, c].count(i) == 2:
            print(1000 + i * 100)
            break

else:
    print(max([a, b, c]) * 100)
