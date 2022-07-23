#include<stdio.h>
#include <stdlib.h>


int main (){
    int sonlar [15];

    for (int i=1; i<6; i++){
        printf("%d sonni kiriting ", i);
        scanf("%d", &sonlar[i]);
    }

    printf("Arraydagi  sonlar [%d], %d", 5, sonlar[5]);

    return 0;
}
