#include <stdio.h>
void table(int n)
{
    for(int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n ,i, n*i);
    }
}
int main(void){
    int n = 5;
    table(n);
}