#include <stdio.h>
#include <stdlib.h>

int main()
{ //1
    float x,y;
    printf("Enter your working hours: ");
    scanf("%f",&x);
    y=x*50.0;
    if(x<40){

        printf("Your salary after deduction:%0.2f",y-(y*10/100));
    }
    else
    printf("Your salary is:%0.2f",y);
    return 0;
}
