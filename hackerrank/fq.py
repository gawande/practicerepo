tmp=map(int,raw_input().strip().split(" "))
n=tmp[0]
m=tmp[1]
h={}
x=0
dist=[[2*n]*(2*n) for i in range(2*n)]
for s in range(n):
    conn=raw_input().strip().split(" ")
    if conn[0] not in h:
        h[conn[0]]=x
        x=x+1
    if conn[1] not in h:
        h[conn[1]]=x
        x=x+1
    dist[h[conn[0]]][h[conn[0]]]=0
    dist[h[conn[1]]][h[conn[1]]]=0
    dist[h[conn[0]]][h[conn[1]]]=1
    dist[h[conn[1]]][h[conn[0]]]=1
    c0=h[conn[0]]
    c1=h[conn[1]]
    for k in range(x):
        if dist[c0][k]>dist[c1][k]+1:
            dist[c0][k]=dist[c1][k]+1
            dist[k][c0]=dist[c0][k]
        if dist[c1][k]>dist[c0][k]+1:
            dist[c1][k]=dist[c0][k]+1
            dist[k][c1]=dist[c1][k]
prim=h[raw_input().strip()]
for s in range(m):
    f=h[raw_input().strip()]
    print dist[prim][f]
    
    
    
    
    
    
    
    
    
    
    
    
    
