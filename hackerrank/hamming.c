#include <stdio.h>
#include <string.h>

int main(){
	char a[100000];
	scanf("%s",a);
	int lena=strlen(a);
	int lenb;
	int l[100000];
	int k;
	scanf("%d",&k);
	char b[100000];
	int i,j;
	int hamming;
	for(i=0;i<k;i++){
		memset(b,0,100000);
		scanf("%s",b);
		lenb=strlen(b);
		hamming=0;
		for(j=0;j<lenb;j++){
			if(a[j]!=b[j]){
				hamming=hamming+1;	
			}	
		}
		l[0]=hamming;
		for(j=lenb+1;j<lena;j++){
			if()	
		}
		
			
	}	
}
