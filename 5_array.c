int main (){
    int fibonachi[10];
    int n;
    printf("N: ");
    scanf("%d", &n);

    fibonachi[0]=1;
    fibonachi[1]=1;

    for(int i=2; i<n; i++){
        fibonachi[i]=fibonachi[i-2]+fibonachi[i-1];
    }

    for(int i=0; i<n; i++){
        printf("%i : %i\n", i, fibonachi[i]);
    }

    return 0;
}