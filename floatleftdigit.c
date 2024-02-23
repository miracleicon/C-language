#include <stdio.h>
// make function for float number
int x(float num)
{
    int y = (int)num; //Extract integral part 
    while(y>=10)
    {
        y = y/10; // Keep dividing until leftmostdigit is obtained
    }
    return y;
}

int main()
{
    float num;
    printf("Enter floating-point number: ");
    scanf("%f",&num);
    
    int z = x(num);
    printf("leftmostdigit of the integral part: %d\n",z);
    return 0;
}
