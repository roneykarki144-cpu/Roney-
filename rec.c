#include<stdio.h>
#include<conio.h>
int main(){
    int l,b;
    int area,per;
    printf("Enter a length and breadh:");
    scanf("%d%d",&l,&b);
    area=l*b;
    per=2*(l+b);
    printf("Your area is %d\n",area);
    printf("Your perimeter is %d",per);
    return 0;

}