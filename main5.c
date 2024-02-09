#include <stdio.h>
#include <stdlib.h>

int main()
{ float x,y,z;
    printf("Enter 3 numbers:\n");
    scanf("%f\n%f\n%f",&x,&y,&z);
    if(x==y && x==z){
        printf("The three numbers are equal");
    }
    else if(y>x && y>z){
    printf("%.2f is the maximum",y);
    }
    else if(x>y && x>z){
    printf("%.2f is the maximum",x);
    }
    else
    printf("%.2f is the maximum",z);
    return 0;
}
