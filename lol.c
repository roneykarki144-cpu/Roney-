#include<stdio.h>
int main(){
    char name[30];
    int sum ;
    float money ;
    char symbol ;
     printf("Enter your name,money with symbol and sum:\n");
     scanf("%s%f%c%d",name,&money,&symbol,&sum);
     printf("My name is %s , %f  %c, and sum is %d ",name,symbol,money,sum);
     return 0;
}