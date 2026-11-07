import sys

def main():
    
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    t = int(input_data[0])
    
    idx = 1
    for _ in range(t):
        n = int(input_data[idx])
        s = input_data[idx+1]
        idx += 2
        
        if n != 5:
            print("NO")
            continue
            
        
        sorted_s = "".join(sorted(s))
        
        if sorted_s == "Timru":
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    main()
