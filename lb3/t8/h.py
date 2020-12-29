for x in range(1000000000):
    s = str(x * x)
    if s == s[::-1]:
        print(x, s)
