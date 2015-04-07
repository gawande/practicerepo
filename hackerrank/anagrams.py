def areAnagrams(s1,s2):
	return sorted(s1)==sorted(s2)

t=input()
for w in range(t):
	count=0
	s=raw_input().strip()
	#print s
	for i in range(1,len(s)+1):
		start=0
		substr=[]
		while start+i<=len(s):
			substr.append(s[start:start+i])
			start+=1
		#print i
		#print substr
		for j in range(len(substr)-1):
			for k in range(j+1,len(substr)):
				if areAnagrams(substr[j],substr[k]):
					count+=1
	print count
