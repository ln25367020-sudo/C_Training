#include <stdio.h>

int main(void){
    printf("===Day of Week===\n");
    int choice;
    while(1){
        printf("Enter number(1-7)or 0 to exit:");
        scanf("%d",&choice);

        if(choice == 0){
            printf("Thank you.See you again.\n");
            break;
        }

        switch(choice){
            case 1:
            printf("Monday\n");
            printf("\n");
            break;

            case 2:
            printf("Tuesday\n");
            printf("\n");
            break;

            case 3:
            printf("Wednesday\n");
            printf("\n");
            break;

            case 4:
            printf("Thursday\n");
            printf("\n");
            break;

            case 5:
            printf("Friday\n");
            printf("\n");
            break;

            case 6:
            printf("Saturday\n");
            printf("\n");
            break;

            case 7:
            printf("Sunday\n");
            printf("\n");
            break;

            default:
            printf("Invalid choice\n");
            printf("\n");
        }

    }

    return 0;
}