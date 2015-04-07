def tip(n,x,y):
	if t[n][x][y]==-1:
		if n==0:
			t[n][x][y]=0
		elif x==0:
			t[n][x][y]=b[n-1]+tip(n-1,x,y-1)
		elif y==0:
			t[n][x][y]=a[n-1]+tip(n-1,x-1,y)
		else:
			t[n][x][y]=max(a[n-1]+tip(n-1,x-1,y),b[n-1]+tip(n-1,x,y-1))
	return t[n][x][y]

tmp=map(int,raw_input().strip().split(" "))
N=tmp[0]
X=tmp[1]
Y=tmp[2]
a=map(int,raw_input().strip().split(" "))
b=map(int,raw_input().strip().split(" "))
t=[[[-1 for i in range(Y+1)] for j in range(X+1)] for k in range(N+1)]
print tip(N,X,Y)

