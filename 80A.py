n , m = map(int , input().split())
for num in range( n+1 , m+1):
    count = 0
    
    for i in range(1 , num +1):
        if num % i == 0:
            count +=1
    if count == 2:
        if num == m:
            print ("YES")
        else:
            print("NO")
        break
else:
    print("NO")
                
                
