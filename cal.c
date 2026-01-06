#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
   char op;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter calculation symbol (+, -, *, /):");
    scanf(" %c", &op);
    if(op == '+'){

    
          printf("Add:%d\n",a+b);
    }
    else if ( op == '-')
    {
         printf("Sub:%d\n",a-b);
    }
else if ( op == '*')
{
     printf("Mul:%d\n",a*b);
}
else if ( op == '/')
{
      printf("div:%d\n",a/b);
}
else 
{
    printf("error");
}
  
    
 
      
return 0;

}