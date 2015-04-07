#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ll;

ll* a;
ll* b;

/*
 * 
 * X => a
 * Y => b
 * 
*/


ll max(ll a,ll b){
	if(a>=b){
		return a;	
	}
	else{
		return b;	
	}	
}

ll tip(ll n,ll x,ll y){
	if(n==0){
		return 0;	
	}
	if(x==0){
		if(t[n-1][x][y-1]!=-1){
			return b[n-1]+t[n-1][x][y-1];	
		}
		else{
			t[n-1][x][y-1]=tip(n-1,x,y-1);
			return b[n-1]+t[n-1][x][y-1];
		}
	}
	if(y==0){
		if(t[n-1][x-1][y]!=-1){
			return a[n-1]+t[n-1][x-1][y];	
		}
		else{
			t[n-1][x-1][y]=tip(n-1,x-1,y);
			return a[n-1]+t[n-1][x-1][y];	
		}
	}
	if(t[n][x][y]!=-1){
		return t[n][x][y];	
	}
	else{
		t[n][x][y]=max(a[n-1]+tip(n-1,x-1,y),b[n-1]+tip(n-1,x,y-1));	
		return t[n][x][y];
	}
	
}

int main(){
	ll N,X,Y;
	scanf("%d %d %d",&N,&X,&Y);
	a=(ll*)malloc(sizeof(ll)*N);
	b=(ll*)malloc(sizeof(ll)*N);
	ll i,j,k;
	for(i=0;i<N;i++){
		for(j=0;j<X;j++){
			for(k=0;k<Y;k++){
				t[i][j][k]=-1;	
			}	
		}	
	}
	
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);	
	}
	for(i=0;i<N;i++){
		scanf("%d",&b[i]);	
	}
	printf("%d\n",tip(N,X,Y));
		
	return 0;	
}







