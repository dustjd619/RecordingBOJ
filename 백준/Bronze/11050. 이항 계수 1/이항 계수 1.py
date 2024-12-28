import math

N,K= map(int,input().split())

a=1

for i in range(0,K) :
    a *= (N-i)

result = a/(math.factorial(K))

print(int(result))