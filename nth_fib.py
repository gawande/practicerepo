from matrix_expo import * 

def nth_fib(n):
	A_n=matrix_expo_rec([[1,1],[1,0]],2,n)
	return matrix_mult_naive(A_n,[[1],[0]],(2,2),(2,1))[1][0]

if __name__=="__main__":
	print "Enter a number:",
	print "Answer: "+str(nth_fib(int(raw_input().strip())))	
