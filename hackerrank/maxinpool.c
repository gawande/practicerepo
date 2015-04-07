#include <stdio.h>
#include <string.h>

typedef long long unsigned llu;

int main(){
	llu n,j,max;
	scanf("%llu",&n);
	llu arr[1000000];
	memset(arr,0,sizeof(llu)*1000000);
	llu i;
	j=0;
	long long temp;
	max=0;
	llu k;
	for(i=0;i<n;i++){
		//printf("i==%llu\n",i);
		scanf("%lld",&temp);
		//printf("temp==%lld\n",temp);
		if(temp!=0 && temp!=-1){
			arr[j++]=temp;
			if(arr[j-1]>max){
				max=arr[j-1];	
			}
		}
		else if(temp==0){
			printf("%llu\n",max);	
		}
		else if(temp==-1){
			arr[--j]=0;
			max=0;
			for(k=0;k<j;k++){
				if(arr[k]>max){
					max=arr[k];
				}	
			}	
		}	
	}
	return 0;	
}
