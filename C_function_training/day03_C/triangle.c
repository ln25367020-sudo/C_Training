#include <stdio.h>
void triangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(void){
    int n;
    while(1)
    {
        printf("Enter Height 0r enter 0 to exit:");
        printf("\n");
        scanf("%d", &n);

        if(n == 0){
            printf("See You later...\n");
            break;
        }
        if(n < 0){
            printf("Please Enter positive number(+)!\n");
            continue;;
        }
        triangle(n);
    }


}