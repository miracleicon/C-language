#include<stdio.h>
int main()
{
    int n , result;
    printf(" Enter the number to find the factorial:");
    scanf("%d",&n);
    result = fact(n);
    printf("The factorial of %d is %d ",n , result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
