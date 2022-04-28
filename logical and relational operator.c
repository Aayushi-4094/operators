/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
 int main() 
{
    int num1,num2,num3;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("num1=%d,\nnum2=%d,\nnum3=%d.",num1,num2,num3);
    if (num1<num2&&num1>num2)
    printf("%d",(num1+num2+num3)/3);
    else if ((num1==num2||num1==num3) && (num1<=num2||num2>=num3))
    printf("%d",(num1*num2*num3)/3);
    else
    printf("\nError!!");
   return 0; 
} 