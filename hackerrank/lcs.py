def lcs(a,b):
    m=len(a)
    n=len(b)
    if m==0 or n==0:
        return 0
    if a[m-1]==b[n-1]:
        return 1+lcs(a[:m-1],b[:n-1])
    else:
        return max(lcs(a[:m-1],b),lcs(a,b[:n-1]))
str1=raw_input()
str2=raw_input()
print lcs(str1,str2)
