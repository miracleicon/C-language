// Write a program to find the sum of series using function
// 1! + 2! + 3! + 4! +----------- n terms
#include <stdio.h>
// function to calculate the factorial of a number
int factorial(int num)
{
    if(num == 0 || num == 1)
    return 1;
    else
    return num*factorial(num-1); //n*(n-1)!
}

//function to calculate the sum of series
int sumoffactorial(int n)
{
    int sum = 0;
    for(int i =1 ; i<=n ; i++)
    {
        sum = sum+factorial(i);
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
     int sum = sumoffactorial(n);
     printf("Sum of the seriesof factorial 1!+2!+3!+...+%d! = %d\n",n ,sum);
    return 0;
}
