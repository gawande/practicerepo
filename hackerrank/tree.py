n=input()
dist=[[float("inf") for i range(n+1)] for j in range(n+1)]
edges={}
for s in range(n-1):
	edge=map(int,raw_input().strip().split(" "))
	edges[s+1]=edge
	dist[edge[0]][edge[0]]=0
	dist[edge[1]][edge[1]]=0
	if dist[edge[0]][edge[1]]>edge[2]:
		dist[edge[0]][edge[1]]=edge[2]
		dist[edge[1]][edge[0]]=edge[2]
		for i in range(1,n+1):
			if dist[edge[0]][i]>dist[edge[0]][edge[1]]+dist[edge[1]][i]:
				dist[edge[0]][i]=dist[edge[0]][edge[1]]+dist[edge[1]][i]
		for i in range(1,n+1):
			if dist[edge[1]][i]>dist[edge[1]][edge[0]]+dist[edge[0]][i]:
				dist[edge[1]][i]=dist[edge[1]][edge[0]]+dist[edge[0]][i]
for q in range(input()):
	query=map(int,raw_input().strip().split(" "))
	if query[0]
			
		
