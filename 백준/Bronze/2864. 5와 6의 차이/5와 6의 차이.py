A, B = input().split()

Alist = list(A)
Blist = list(B)

for i in range(len(Alist)):
    if Alist[i] == "6":
        Alist[i] = "5"

for i in range(len(Blist)):
    if Blist[i] == "6":
        Blist[i] = "5"

min_A = int("".join(Alist))
min_B = int("".join(Blist))

for i in range(len(Alist)):
    if Alist[i] == "5":
        Alist[i] = "6"

for i in range(len(Blist)):
    if Blist[i] == "5":
        Blist[i] = "6"

max_A = int("".join(Alist))
max_B = int("".join(Blist))

print(min_A + min_B, max_A + max_B)
