#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
	if(a>=b){
		return a;	
	}
	return b;	
}

int main(){
	int S,N;
	scanf("%d %d",&S,&N);
	int size[N];
	int value[N];
	int K[N+1][S+1];
	int i;
	for(i=0;i<N;i++){
		scanf("%d %d",&size[i],&value[i]);		
	}
	int s;
	for(i=0;i<=N;i++){
		for(s=0;s<=S;s++){
			if(i==0 || s==0){
				K[i][s]=0;	
			}
			else if(size[i-1]<=s){
				K[i][s]=max(K[i-1][s],value[i-1]+K[i-1][s-size[i-1]]);	
			}
			else{
				K[i][s]=K[i-1][s];	
			}	
		}	
	}	
	
	printf("%d\n",K[N][S]);
	
	for(i=0;i<=N;i++){
		for(s=0;s<=S;s++){
			printf("%d\t",K[i][s]);	
		}
		printf("\n");	
	}
	
	
	return 0;	
}
