#include<stdio.h>
#include<conio.h>
int main(){
    float n1,n2;
    char cal;
    printf("Enter any two numbers\n");
    scanf("%f%f",&n1,&n2);
    printf("Enter [+,-,*,/] to calculate\n");
    scanf(" %c",&cal);
    switch(cal){
        case '+':
        printf("The add is %d ",n1+n2);
        break;

  case '-':
        printf("The sub is %d ",n1-n2);
        break;
          case '*':
        printf("The multiply is %d ",n1*n2);
        break;
          case '/':
        printf("The division is %.2f ",n1/n2);
        break;
  }
  




return 0;
}