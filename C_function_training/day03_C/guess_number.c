#include <stdio.h>
void checkGuess(int x)
{
    int answer = 7;
    if(x < answer){
            printf("Higher!\n");
        }else if (x > answer)
        {
            printf("Lower!\n");
        }else{
        printf("U Did it!!\n");
    }
}
int main(void){

    int count = 0;
    int a = 0;
    printf("===Guess The Number===\n");
    while(a!=7){
    printf("Enter Number:");
    scanf("%d",&a);
    count+=1;
    checkGuess(a);
    }
    printf("Total Attempt %d\n",count);
    return 0;
}