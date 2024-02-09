#include <stdio.h>
#include <stdlib.h>

int main()
{ float arr[10],avg,sum=0;
    printf("Emter 10 numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("The summation is %.2f\n",sum);
    printf("The averge is %.2f",sum/10);


    return 0;
}
