#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef long ll;

ll hist[100000];
ll minht;

int main() {
    int n;
    ll maxarea,area;
    int i,j;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;    
        }
        for(i=0;i<n;i++){
            scanf("%ld",&hist[i]);          
        }
        maxarea=-1;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(i==j){
                    minht=hist[j];
                }
                else{
                    if(hist[j]<minht){
                        minht=hist[j];
                    }
                }
                area=minht*(j-i+1);
                if(area>maxarea){
                    maxarea=area;
                }
            }           
        }
        printf("%ld\n",maxarea);
        
       
    }
          
    return 0;
}
