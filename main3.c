#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
    printf("Enter your ID:\n");
    scanf("%d",&x);
    switch (x){

    case 1234:
    printf("Harry");
    break;
    case 5678:
    printf("Ron");
    break;
    case 1145:
    printf("Hermione");
    break;
    default:
    printf("Wrong ID");


    }
    return 0;
}
