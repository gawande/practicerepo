t=input()
for s in range(t):
    n=input()
    arr=map(int,raw_input().strip().split(" "))
    allneg=True
    for i in arr:
        if i>=0:
            allneg=False
            break
    if allneg:
        print str(max(arr))+" "+str(max(arr))
    else:
        maxsofar=0
        maxendinghere=0
        for i in arr:
            maxendinghere=maxendinghere+i
            if maxendinghere<0:
                maxendinghere=0
            if maxsofar<maxendinghere:
                maxsofar=maxendinghere
        maxnoncont=0
        for i in arr:
            if i>=0:
                maxnoncont=maxnoncont+i
    
        print str(maxsofar)+" "+str(maxnoncont)
