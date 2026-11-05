for _ in range(int(input())):
    s = input()
    mid = len(s) // 2
    
    
    if len(s) % 2 == 0 and s[mid : ] == s[: mid]:
        print("YES")
    else:
        print("NO")
