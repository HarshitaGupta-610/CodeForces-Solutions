n = int(input())

h = 0
total_cubes = 0

# Keep adding levels until we run out of cubes
while True:
    h += 1
    # Cubes needed for level h is the sum 1 + 2 + ... + h
    total_cubes += (h * (h + 1)) // 2

    # If the total exceeds n, the maximum complete height was the previous level
    if total_cubes > n:
        print(h - 1)
        break
