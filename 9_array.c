#include<stdio.h>
#include<math.h>

int main (){

int a[10];
int i,n, k=0;

printf("N: ");
scanf("%d", &n);

for(i=0; i<n; i++){
    printf("a[%d]: ", i );
    scanf("%i", &a[i]);
}

for (i=n-1; i>=0; i--){
    if(a[i]%2 ==0){
        printf("%d\n", a[i]);
        k++;
    }
}

printf("%d\n", k);

return 0;
}