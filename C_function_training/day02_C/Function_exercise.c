#include <stdio.h>
int square(int x)
{
    return x * x;
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a -b;
}
int multi(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if(b == 0){
        printf("Error\n");
        return 0;
    }

    return a/b;

}
int max(int a, int b)
{
    if(a>= b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main (void)
{
    printf("Division is %d\n", div(6, 2));
    printf("Multiplication is %d\n", multi(2, 4));
    printf("Substraction is %d\n", sub(3, 2));
    printf("Addition is %d\n", add(4,6));
    printf("Sqaure is %d\n", square(5));
    printf("Max between 2 numbers is %d\n", max(3, 2));
    printf("Nested Function is %d\n", add(square(4),sub(11,7)));
}