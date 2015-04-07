t=input()
raw_input()
for s in range(t):
	print "Case #"+str(s+1)+":" 
	m=input()
	n=input()
	length=map(int,raw_input().strip().split(" "))
	ln=[0 for i in range(n)]
	current=1
	charleft=m
	for i in range(n):
		if charleft>=length[i]:
			ln[i]=current
			charleft=charleft-(length[i]+1)
		else:
			current=current+1
			ln[i]=current
			charleft=m-(length[i]+1)
	while True:
		cmd=raw_input().strip().split(" ")
		#print cmd
		if cmd[0]=="E":
			raw_input()
			break
		elif cmd[0]=="I":
			n=int(cmd[1])
			print ln[n-1]
		elif cmd[0]=="C":
			nn=int(cmd[1])
			l=int(cmd[2])
			length[nn-1]=l
			current=ln[nn-2]
			j=nn-2
			while j>=0 and ln[j]==current:
				j=j-1
			j=j+1
			charleft=m
			#print "j=="+str(j)
			for k in range(j,n):
				#print "k=="+str(k)
				if charleft>=length[k]:
					#print "same current"
					ln[k]=current
					charleft=charleft-(length[k]+1)
				else:
					#print "change current"
					current=current+1
					ln[k]=current
					charleft=m-(length[k]+1)
		
		#print length
		#print ln
	print ""	
			
