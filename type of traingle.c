#// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    printf("Welcome to Online IDE!! Happy Coding :\n");
    float a,b,c;
    printf("enter the first side\n");
    scanf("%f",&a);
    printf("enter the second side\n");
    scanf("%f",&b);
    printf("enter the third side\n");
    scanf("%f",&c);
    
    if (a==b &&b==c)
    printf("the triangle is equilateral");
    else if (a!=b &&b!=c && a!=c)
    printf("the triangle is scalene");
    else 
    printf("the triangle is isosceles");
    
    return 0;
}