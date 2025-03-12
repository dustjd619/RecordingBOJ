import sys

data=list(map(int,sys.stdin.readline().split()))

sorted_data = sorted(data)
reversed_data = sorted(data, reverse = True)

if data == sorted_data :
    print('ascending')

elif data == reversed_data :
    print('descending')

else :
    print('mixed')