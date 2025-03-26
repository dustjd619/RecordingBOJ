T = int(input())

for i in range(T):
    C = int(input())

    Q, D, N, P = 0, 0, 0, 0

    # Q: 25, D: 10, N: 5,P: 1
    while C > 0:
        if C >= 25:
            Q += 1
            C -= 25
        elif C >= 10:
            D += 1
            C -= 10
        elif C >= 5:
            N += 1
            C -= 5
        else:
            P += 1
            C -= 1

    print(Q, D, N, P)
