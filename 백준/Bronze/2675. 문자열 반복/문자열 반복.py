import sys

T = int(input())

for i in range(T):
    R, S = sys.stdin.readline().split()
   

    for i in S :
        print(i*int(R),end="")
    
    print('')