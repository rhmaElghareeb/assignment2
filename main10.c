#include <stdio.h>
#include <stdlib.h>

int main()
{ int ID=1234,x,pass=5678,y,flag=0;
    printf("Enter your ID\n");
    scanf("%d",&x);
    if(x==ID){
        printf("Enter your password:\n");
        for(int i=0;i<3;i++){
        scanf("%d",&y);
        if(y==pass){
            flag++;
            printf("Welcome!");
            break;
        }
        else{
            printf("Your not registered\n");
             }}
         if(flag==0){
        printf("No more tries");}
    }
        else{
            printf("Wrong ID");
        }
    return 0;
}
