/* WAP to find GCD of Two numbers using recursion 2022-23 */
#include <stdio.h>
int main()
{
    int a , b , result;
    printf("!! Please Enter two number to find their GCD !!\n");
    printf("Enter First Number :");
    scanf("%d",&a);
    
    printf("Enter Second Number :");
    scanf("%d",&b);
    
    result =gcd(a , b);
    printf("The GCD of %d and %d is %d\n", a , b , result);
}
int gcd(int a , int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,a);
        }
        else
        {
            return gcd(a,b-a);
        }
    }
     return a;
}
