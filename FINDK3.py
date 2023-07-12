# cook your dish here
for t in range(int(input())):
    x,y,z=map(int,input().split())
    if((x*y)%z==0):
        print(x*y,z)
    elif((y*z)%x==0):
        print(y*z,x)
    elif((x*z)%y==0):
        print(x*z,y)
    else:
        print(-1)
    
