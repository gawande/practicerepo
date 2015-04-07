n=input()
for s in range(n):
	expr=raw_input()
	stack=[]
	valid=True
	for x in expr:
		if x=="{" or x=="[" or x=="(" or x=="<":
			stack.append(x)
		if x=="}" or x=="]" or x==")" or x==">":
			top=stack.pop()
			if (x=="}" and top!="{") or (x=="]" and top!="[") or (x==")" and top!="(") or (x==">" and top!="<"):
				valid=False
				break
	if len(stack)!=0:
		valid=False
	if not valid:
		print "NO"
	else:
		print "YES"
	
