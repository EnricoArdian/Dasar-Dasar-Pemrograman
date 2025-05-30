// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

    void main()
{
    int i,j,k,l,n;
    printf ("Input Berapa Tinggi Segitiga: "); scanf("%i",&n);
    for ( i=1; i<=n; i++ ){
       for ( l=0; l<n; l++ ){
            for ( j=i; j<n; j++ ){
                printf(" ");
                }
            for ( k=1; k<=i-l; k++ ){
                printf("*");
                }
        printf(" ");
       }
    printf("\n");
    }
}
