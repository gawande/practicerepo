t=input()
for s in range(t):
	print "Case "+str(s+1)+":"
	tmp=map(int,raw_input().strip().split(" "))
	n=tmp[0]
	k=tmp[1]
	words=[None]*k
	freq={}
	maxfreq="__dummy__"
	freq[maxfreq]=-1
	for i in range(n):
		tmp=raw_input().strip()
		if words[i%k]==None:
			words[i%k]=tmp
			if tmp not in freq:
				freq[tmp]=1
			else:
				freq[tmp]=freq[tmp]+1
		else:
			freq[words[i%k]]=freq[words[i%k]]-1
			words[i%k]=tmp
			if tmp not in freq:
				freq[tmp]=1
			else:
				freq[tmp]=freq[tmp]+1	
		if freq[tmp]>freq[maxfreq]:
			maxfreq=tmp
		elif freq[tmp]==freq[maxfreq]:
			if tmp<maxfreq:
				maxfreq=tmp	
		print maxfreq+" "+str(freq[maxfreq])
	
	
