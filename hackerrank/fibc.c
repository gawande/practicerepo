#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    long a,b,n;
    long tmp;
    int i;
    long j;
    for(i=0;i<t;i++){
        scanf("%ld%ld%ld",&a,&b,&n);
        for(j=0;j<n-1;j++){
            tmp=b;
            b=(a+b)%1000000007;
            a=tmp;
        }
        printf("%ld\n",b);
    } 
       
    return 0;
}
