#include <stdio.h>
int main()
{
    int k,l,m;
    for(k=1;k<=5;k++){
        for(l=5;l>=k;l--){
                printf(" ");

        }
        for(m=1;m<=k*2-1;m++){
                if (k%2 == 0){
                printf("%d",k);
        }
        else{
                printf("%d",m);
    }

    }
    printf("\n");
    }


    return 0;
}
