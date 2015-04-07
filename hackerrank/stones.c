#include <stdio.h>

long A[100000],B[100000];

int main(){
	int t;
	scanf("%d",&t);
	int j;
	long N,K;
	int i;
	long maxval,stones,stoneval;
	for(j=0;j<t;j++){
		scanf("%ld%ld",&N,&K);
		for(i=0;i<N;i++){
			scanf("%ld",&A[i]);
		}
		for(i=0;i<N;i++){
			scanf("%ld",&B[i]);
		}
		maxval=-1;
		for(i=0;i<N;i++){
			stones=K/A[i];
			stoneval=stones*B[i];
			if(maxval<stoneval){
				maxval=stoneval;
			}
		}
		printf("%ld\n",maxval);			
	}			
	return 0;
}
