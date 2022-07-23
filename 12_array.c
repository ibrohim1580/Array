#include<stdio.h>

int main (){
    int a[10];
    int n,i;

    printf("N: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%i]",i+1);
        scanf("%i", &a[i]);
    }

    for (int i=1; i<n; i+=2){
        printf("%i\n", a[i]);
    }

    return 0;

}