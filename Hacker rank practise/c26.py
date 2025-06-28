# cook your dish here
n = int(input())

while n:
    v = int(input())
    b = int(input())
    
    while v>b:
        v = v-b;
    print(v+b)
    n=n-1