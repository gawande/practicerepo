n=input()
arr=map(int,raw_input().split(" "))
c=[0]*100
for i in arr:
    c[i]=c[i]+1
print " ".join(map(str,c))
