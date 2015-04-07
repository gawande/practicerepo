from fractions import gcd

t=input()
for s in range(t):
	tmp=map(int,raw_input().strip().split(" "))
	print gcd(tmp[0],tmp[1])

