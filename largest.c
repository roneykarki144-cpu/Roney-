#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,n3;
    printf("Enter any 3 numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    printf("The largest number is %d",n1);

    else if(n2>n3 && n2>n1)
     printf("The largest number is %d\n",n2);
     else
      printf("The largest number is %d\n",n3);
if(n1<n2 && n1<n3)
    printf("The smallest number is %d\n",n1);

    else if(n2<n3 && n2<n1)
     printf("The smallest number is %d\n",n2);
     else
      printf("The smallest number is %d\n",n3);
    
 
  if((n1>n2 && n1<n3) || (n1>n3 && n1<n2))
        printf("The 2nd largest number is %d\n", n1);

    else if((n2>n1 && n2<n3) || (n2>n3 && n2<n1))
        printf("The 2nd largest number is %d\n", n2);

    else
        printf("The 2nd largest number is %d\n", n3);



    return 0;
}