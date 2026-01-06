#include <stdio.h>

int main() {
    int a = 20;
    int b = 15;

    printf("ADD:%d\n",a+b);
    printf("SUB:%d\n",a-b);
    printf("MULTIPLY:%d\n",a*b);
    printf("DIVISION:%d\n",a/b);
    printf("MODULUS:%d\n",a%b);


    printf("LOGICAL AND %d\n",1&&0);
     printf("LOGICAL AND %d\n",1||0);
      printf("LOGICAL AND %d\n",0&&0);

       printf("LOGICAL AND %d\n",(a>b)&&(a<b));
        printf("LOGICAL OR %d\n",(a>b)||(a<b));


    printf("Or %d\n",1||0);
    printf("Or %d\n",0||0);
    printf("Or %d\n",1||1);
 

    return 0;
}
