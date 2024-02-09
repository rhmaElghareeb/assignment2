#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,i;
    printf("Enter a number: \n");
    scanf("%d",&x);
    printf("Multiplication Table:\n");
    for(i=1;i<=12;i++){
        printf("%dx%d=%d\n",x,i,x*i);
    }
    return 0;
}
