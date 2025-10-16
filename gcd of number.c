#include <stdio.h>
#include <stdlib.h>
int GCD(int a, int b)
{
    if(a==b)return a;
    else if(a>b)
        return GCD(a-b,b);
    return GCD(b,a);
}
int main ()
{
    int a, b;
    printf("\n Read value for a and b:");
    scanf("%d%d",&a,&b);
    printf("\nGCD of %d and %d is:%d\n",a,b,GCD(a,b));
    return 0;

}
