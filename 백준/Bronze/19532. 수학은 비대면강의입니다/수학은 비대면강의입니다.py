a, b, c, d, e, f = map(int, input().split())

print(int((c * e - b * f) / (a * e - b * d)), int((a * f - c * d) / (a * e - b * d)))
