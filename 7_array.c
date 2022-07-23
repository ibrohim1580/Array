#include<stdio.h>

int main (){
    int a[10];
    int n,i;

    printf("N: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%i]",i);
        scanf("%i", &a[i]);
    }
    for(i=n-1; i>=0; i--){
        printf("a[%i] : %i\n", i, a[i]);
    }

    return 0;
}