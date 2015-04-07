def matrix_mult_naive(M1,M2,s1,s2):
# naive matrix multiplication
# s1, s2 are size tuples for (row,col)
	if s1[1]!=s2[0]:
		return None
	M=[[0 for i in range(s2[1])] for j in range(s1[0])]
	#print M	
	for i in range(s1[0]):
		for j in range(s2[1]):
			for k in range(s1[1]):
				#print i,j,k
				M[i][j]+=M1[i][k]*M2[k][j]
				#print M	
	return M


def matrix_expo_rec(A,n,power):
	if power==0:
		return [[1 if i==j else 0 for i in range(n)] for j in range(n)]  # the nxn identity matrix
	elif power==1:
		return A
	elif power%2==0:
		return matrix_mult_naive(matrix_expo_rec(A,n,power/2),matrix_expo_rec(A,n,power/2),(n,n),(n,n))
	else:
		return matrix_mult_naive(A,matrix_mult_naive(matrix_expo_rec(A,n,(power-1)/2),matrix_expo_rec(A,n,(power-1)/2),(n,n),(n,n)),(n,n),(n,n))	


if __name__=="__main__":
	# F_13,F_12
	A_n=matrix_expo_rec([[1,1],[1,0]],2,12)
	ans=matrix_mult_naive(A_n,[[1],[0]],(2,2),(2,1))
	print ans[0]
	print ans[1] 	
