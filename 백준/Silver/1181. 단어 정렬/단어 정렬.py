N = int(input())
word = set()

for _ in range(N):
    word.add(input())

sorted_word = sorted(word, key=lambda x: (len(x), x))

for i in sorted_word:
    print(i)
