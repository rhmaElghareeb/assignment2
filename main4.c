#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
    printf("Enter your grade:\n");
    scanf("%d",&x);
    if(x>=90 && x<=100){
        printf("Excellent!");

    }
    else if(x>=80 && x<=89){
        printf("Very good!");

    }
    else if(x>=70 && x<=79){
        printf("Good");}

    else if(x>=60 && x<=69){
        printf("Average");
    }
     else if(x>=0 && x<60){
        printf("Fail");
     }
     else
        printf("Error");
    return 0;
}
