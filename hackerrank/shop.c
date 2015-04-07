#include <stdio.h>
#include <stdlib.h>

long long max(long long a,long long b){
	if(a>=b){
		return a;	
	}
	return b;	
}

int main(){
	long n;
	scanf("%ld",&n);
	long i;
	long long value[n];
	long long K[n+2];
	for(i=0;i<n;i++){
		scanf("%lld",&value[i]);	
	}
	K[0]=0;
	K[1]=0;
	for(i=2;i<=n+1;i++){
		K[i]=max(K[i-1],value[i-2]+K[i-2]);	
	}
	printf("%lld\n",K[n+1]);
	
	return 0;
}
