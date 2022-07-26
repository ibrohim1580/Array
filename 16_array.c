#include<stdio.h>

int main (){
    int a[10];
    int i,n;

    printf("N: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%d]", i+1);
        scanf("%d", &a[i]);
    }


    for(i=0; i<n/2; i++){
        printf("%d\n", a[i]);
        printf("%d\n", a[n-i-1]);
    }

    if (n%2 !=0){
        printf("%i\n",a[(n/2)]);
 
    return 0;
    }
}