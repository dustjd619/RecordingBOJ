N = int(input())
ticket = list(map(int, input().split()))

ticket.sort()

H = 1
for i in range(len(ticket)):
    if H != ticket[i]:
        break
    H += 1

print(H)
