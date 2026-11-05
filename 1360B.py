for _ in range(int(input())):
    n = int(input())
    s = sorted(map(int, input().split()))
    ans = min(s[i + 1] - s[i] for i in range(n - 1))
    print(ans)
