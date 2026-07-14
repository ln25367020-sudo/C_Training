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
    int n = 1;
    while (n!= 0)
    {

    printf("Enter height:  ");
    scanf("%d", &n);

    triangle(n);
    printf("To stop enter 0...");
    }


}