#include <stdio.h> 
 
int main(){
    int a[10];
    int n,k,l;
 
    printf("N: ");
    scanf("%i",&n);
 
    printf("K: ");
    scanf("%i",&k);
 
    printf("L: ");
    scanf("%i",&l);
 
    int i,s,c=0,j;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i++);
        scanf("%i",&a[i]);
    }
 
    if(0<=k <=l <=n){
    
        for(i=k; i<l; i++){
            s+=i;
            c++;
            j=s/c;
        }
    }
 
    printf("%i\n: ",j);
    return 0;
}