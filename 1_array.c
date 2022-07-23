#include<stdio.h>
#include<stdlib.h>

int main (){
    int n;
    printf("n sonini kiriting: " );
    scanf("%d", &n);
    int sonlar [n], index = 0;


    for(int i=1; i<3*n; i++){
        if(i%2!=0 && index+1<=n){
            sonlar[index++] = i;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d", sonlar[i] );
    }

    return 0;
}