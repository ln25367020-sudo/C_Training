#include<stdio.h>
int main(void){
    int choice;
    printf("1. Banana\n");
    printf("2. Apple\n");
    printf("3. Durian\n");
    printf("Enter The Number of Fruit that You want to buy:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("You chose Banana\n");
        printf("For 1 bag(3bananas) 500yen\n");
        break;
        case 2:
        printf("You chose Apple\n");
        printf("400yen for 1\n");
        break;
        case 3:
        printf("You chose Durian\n");
        printf("1500yen per Durian\n");
        break;
        default:
        printf("Not on the list\n");

    }
    return 0;

}