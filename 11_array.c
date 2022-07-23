#include <stdio.h>
#include <math.h>

int main(){

    int n=20, A=4, B=1;
    int massiv[n], oldingilari=0, k=4;

    massiv[0] = A;
    massiv[1] = B;

    for(int i=2; i<n; i++){
        oldingilari = 0;
        for(int j=0; j<i; j++){
            oldingilari += massiv[j];
        }
        massiv[i] = oldingilari;
    }

    for(int i=0; i<n; i++) if(i%k==0 && i!=0) printf("massiv[%d]=%d\n", i, massiv[i]);

    return 0;
}