#include<stdio.h>
#include<conio.h>
int main(){
    int age ;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("YOU ARE ELIGIBLE");
    }
    else
    {
        printf("YOU ARE NOT ELIGIBLE");
    }
    return 0;
}