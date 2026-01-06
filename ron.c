#include<stdio.h>
#include<conio.h>
int main(){
    float cel,fah;
    printf("Enter your temperature in celsius");
    scanf("%f",&cel);

fah=(cel*1.8)+32;
printf("Your fahrenheit is %f",fah);
return 0;
}