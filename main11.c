    #include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,x;
    printf("enter number of rows: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j <= 2*x-1;j++){
                if(j>= x-(i-1)&& j<= x+(i-1))
                {
                     printf("*");
                }
                else{
                    printf(" ");
                }

       }
        printf("\n");
    }

    return 0;
}
