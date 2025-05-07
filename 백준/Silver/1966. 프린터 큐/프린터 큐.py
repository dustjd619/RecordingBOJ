from collections import deque

T = int(input())

for i in range(T):
    N, M = map(int, input().split())

    # deque에 (중요도, 인덱스)를 쌍으로 묶어 저장
    # enumerate: 반복 가능한 자료에 인덱스를 붙여 튜플로 반환
    rank = deque([(p, i) for i, p in enumerate(map(int, input().split()))])

    count = 0
    while rank:
        flag = False

        # 뒤에 중요도가 높은 문서가 있는지 확인
        for j in range(1, len(rank)):
            if rank[j][0] > rank[0][0]:
                flag = True
                break  # 더이상 확인할 필요 없으니 탈출

        if flag:
            rank.rotate(-1)  # 더 중요한 문서가 있다면, 맨 앞 문서를 뒤로 보냄
        else:
            count += 1
            if rank.popleft()[1] == M:  # 꺼낸 문서가 M번째 문서이면 출력
                print(count)
