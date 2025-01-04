N = int(input())
num = 1

for i in range(1, N + 1):
    num *= i

list = list(str(num))

for j in range(len(list) - 1, -1, -1): #인덱스 끝에서부터 
    if list[j] != "0": #list에 str으로 저장했으니까 '0'과 비교
        print(len(list) - j - 1) 
        break
