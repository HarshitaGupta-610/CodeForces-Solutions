n , m = map(int , input().split())
pixels = "".join(input() for _ in range(n))
if any(color in pixels for color in "CMY"):
    print("#Color")
else:
    print("#Black&White")
