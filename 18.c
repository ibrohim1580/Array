#include<stdio.h>

int main (){

    
    int n,i;
    int a[n];

    printf("N: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%d]", i+1);
        scanf("%d", &i);
    }

    for(i=0; i<n; i++){
        if(a[i]>0){
            printf("a[%d]\n", a[i-1]);
            break;
        }

        if(a[i]<0){
            printf("natija = 0");
            break;
        }
    }


    return 0;
}