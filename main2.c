#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x==0){
        printf("Not even , Not odd ");
    }
    else if(x%2 ==0){
        printf("Even number");

    }
    else
        printf("Odd number");
    return 0;
}
