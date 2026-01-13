#include<stdio.h>
int main(){

    int num,i,a;
    int present = 0;
    float per;
    printf("Enter the numbers of student:");
    scanf("%d",&num);
    for ( i=1;i<=num;i++){
        printf("Enter (1 for present)and(0 for absent):  ");
        scanf("%d",&a);
   
    present = present+a;
    per = (present * 100.0) / num; }
    
    printf("attendence=%d\n",present);
    printf("Attendance = %.2f%%", per);
 
return 0;
}
