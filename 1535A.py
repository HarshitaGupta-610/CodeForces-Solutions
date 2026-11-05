for _ in range(int(input())):
    s = list(map(int, input().split()))

    # Find the two players who make it to the finals
    finalists = sorted([max(s[0], s[1]), max(s[2], s[3])])

    # Check if these two finalists are identical to the top 2 strongest players
    if finalists == sorted(s)[2:]:
        print("YES")
    else:
        print("NO")
