#include<stdio.h>
#include<math.h>

int main (){
    int a[10];
    int n,i;

    printf("N: ");
    scanf("%i",&n);

    printf("A: ");
    scanf("%i",&a[0]);
 
    printf("B: ");
    scanf("%i",&a[1]);

    for(i=n; i<n; i++){
        a[i]=0;
        int i2;
        for (i2=0; i2<i; i2++ ) {
            a[i] += a[i2];
        }
    }

    printf("%i :%i\n", i,  a[i]);
    return 0;
}