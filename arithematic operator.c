/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b,sum,dif,product,mod;
    float division;
    scanf("%d %d",&a,&b);
    sum=a+b;
    dif=a-b;
    product=a*b;
    division=a/b;
    mod=a%b;
    printf("The sum of a and b is %d\nThe difference of a and b is %d\nThe product of a and b is %d\nThe quotitent of a and b is %.2f\nThe remainder of a and b is %d", sum,dif,product,division,mod);
    return 0;
}