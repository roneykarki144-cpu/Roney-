#include <stdio.h>

int main() {
    char name[20];
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float per;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter 5 subjects marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5;

    printf("\nName: %s", name);
    printf("\nRoll: %d", roll);
    printf("\nTotal: %d", total);
    printf("\nPercentage: %f", per);

    if (m1<40||m2<40||m3<40||m4<40||m5<40) {
        printf("\nGrade: F");
        printf("\nResult: Fail");
    } else {
        if (per >= 80)
            printf("\nGrade: A");
        else if (per >= 60)
            printf("\nGrade: B");
        else if (per >= 40)
            printf("\nGrade: C");

        printf("\nResult: Pass");
    }

    return 0;
}
