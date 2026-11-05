t = int(input())
for _ in range(t) :
    x = input()
    digit = int(x[0])
    position = len(x)
    ans = (digit-1)*10  + position*(position +1) // 2
    print(ans)
