//  Write a program in C to print grades as per following criteria for obtained
// percentage of marks M out of 100.

// OBTAINED PERCENT MARKS | GRADE
// 90 < M ≤ 100           | A+
// 80 <M≤ 90              | A
// 70 <M≤ 80              | B+
// 60 <M≤ 70              | B
// 50 <M≤ 60              | C
// M≤ 50                  | F
#include<stdio.h>
int main(){
    float marks;
    printf("Enter Obtained percentage marks: ");
    scanf("%f",&marks);
    if (marks>90 && marks<=100)
    {
        printf("Grade: A+\n");
    }
    else if( marks >80 && marks<=90 )
    {
        printf("Grade: A\n");
    }
    else if( marks >70 && marks<=80 )
    {
        printf("Grade: B+\n");
    }
    else if( marks >60 && marks<=70 )
    {
        printf("Grade: B\n");
    }
    else if( marks >50 && marks<=60 )
    {
        printf("Grade: C\n");
    }
    else if(marks<=50)
    {
        printf("Grade: F\n");
    }
    else
    printf("You are failed!!\n");
    return 0;
    
}
