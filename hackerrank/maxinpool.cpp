#include <iostream>

using namespace std;

typedef long long unsigned llu;

int main(){
	llu n,j,max;
	cin>>n;
	llu arr[1000000];
	llu i;
	j=0;
	long long temp;
	max=0;
	llu k;
	for(i=0;i<n;i++){
		//printf("i==%llu\n",i);
		cin>>temp;
		//printf("temp==%lld\n",temp);
		if(temp!=0 && temp!=-1){
			arr[j++]=temp;
			if(arr[j-1]>max){
				max=arr[j-1];	
			}
		}
		else if(temp==0){
			cout<<max;
			cout<<"\n";	
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
