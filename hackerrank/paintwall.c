#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int v;
    scanf("%d",&v);
    int i;
    int p[9];
    for(i=0;i<9;i++){
        scanf("%d",&p[i]);       
    }
    int noofd=-1;
    int maxi=-1;
    for(i=8;i>=0;i--){
        if((int)(v/p[i])>noofd){
            noofd=(int)(v/p[i]);
            maxi=i;
        }            
    }
    int rem=v%p[maxi];
    int d1indx=-1;
    for(i=maxi+1;i<9;i++){
        if(p[maxi]+rem>=p[i]){
            d1indx=i;
        }
    }
    if(d1indx==-1){
        char s[10];
        sprintf(s,"%d",maxi+1);
        for(i=0;i<noofd;i++){
            printf("%s",s);
        }
        printf("\n");
    }
    else{
        char s1[10];
        bzero(s1,10);
        sprintf(s1,"%d",d1indx+1);
        char s2[1];
        bzero(s2,10);
        sprintf(s2,"%d",maxi+1);
        printf("%s",s1);
        for(i=0;i<noofd-1;i++){
            printf("%s",s2);
        }
        printf("\n");
    }
       
    return 0;
}
