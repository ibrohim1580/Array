#include<math.h>

int main (){
    int a[10];
    int n,i;

    printf("N: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%i]",i+1);
        scanf("%i", &a[i]);
    }
// jufti
    for(i=0; i<n; i++){
        printf("jufti: %i\n\n", a[i]);

    }

// toqi
    for(i=n-(n%2)-1; i>=1; i-=2){
        printf("toqi: %i\n\n", a[i]);

    }

    return 0;

}