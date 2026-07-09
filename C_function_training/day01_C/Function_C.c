#include <stdio.h>
int square(int x )
{
    return x*x;
}
int max2 (int a, int b)
{
    if(a > b){
        return a;
    }
    return b;
}
int max3 (int a, int b, int c)
{
    if (a >= b && a >= c){
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    return c;
}

int main(void){
    int a = 4;
    int b = 7;
    int c = 10;
    printf("%d\n", square(a));
    printf("%d\n", max2(a, b));
    printf("%d\n", max3(a, b, c));

}