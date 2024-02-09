#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
    printf("Enter the result of 3x4 : \n");
    scanf("%d",&x);
       while(x!=12){
        printf("try again\n");
            scanf("%d",&x);
    }
    printf("Thanks");
    return 0;
}
