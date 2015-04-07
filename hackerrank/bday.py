t=input()
for s in range(t):
    b,w=map(int,raw_input().strip().split(" "))
    x,y,z=map(int,raw_input().strip().split(" "))
    print b*min(x,y+z)+w*min(y,x+z)
