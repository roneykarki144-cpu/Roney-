#include<stdio.h>
#include<conio.h>
int main(){
    float bill;
   float cost;
    printf("Enter your input units:");
    scanf("%f",&bill);
    cost = 5*bill;
    printf("Your total cost is %f",cost);
    return 0;
}