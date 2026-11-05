t = int(input())
for _ in range(t):
     a, b = map(int , input().split())
     small  = min(a,b)
     double = 2 * small
     side = max(double ,max(a,b))
     area = side*side
     print(area)
