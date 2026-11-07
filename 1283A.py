for _ in range(int(input())):
    h, m = map(int, input().split())

    ans = 1440 - (h * 60 + m)

    print(ans)
