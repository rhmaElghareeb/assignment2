#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,i=1,sum=1;
    printf("Enter an integer\n");
    scanf("%d",&x);
    if(x>=0){
    while(i<=x){
        sum=sum*i;
        i++;
    }
    printf("%d",sum);}

    else{
     i=x;
    while(i!=0){
        sum=sum*i;
        i++;
    }
    if(x%2==0){
    printf("-%d",sum);
}
    else{
         printf("%d",sum);
    }

    }
    return 0;
}
