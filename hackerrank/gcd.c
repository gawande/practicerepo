#include <stdio.h>

long long unsigned gcd(long long unsigned a,long long unsigned b){
	if(b>a){
		long long unsigned temp=b;
		b=a;
		a=temp;	
	}
	printf("a==%llu b==%llu\n",a,b);
	if(a==1 || b==1){
		return 1;	
	}
	if(a%b==0){
		return b;
	}	
	long long unsigned rn_2=a%b;
	long long unsigned rn_1=b%rn_2;
	if(rn_1==0){
		return rn_2;	
	}
	long long unsigned rn;
	while(1){
		printf("%llu %llu\n",rn_2,rn_1);
		rn=rn_2%rn_1;
		if(rn==0){
			return rn_1;	
		}
		else{
			rn_2=rn_1;	
			rn_1=rn;
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	long long unsigned p,tv;
	int i;
	for(i=0;i<t;i++){
		scanf("%llu %llu",&p,&tv);
		printf("%llu\n",gcd(p,tv));
	}
	
	return 0;	
}
