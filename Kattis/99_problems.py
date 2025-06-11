N = int(input())
if N < 100:
    print(99)
else:
    lag = N % 100
    if lag + 1 < 99 - lag:
        print(N - lag - 1)
    else:
        print(N + 99 - lag)
