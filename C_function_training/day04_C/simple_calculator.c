#include<stdio.h>
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int multi(int a, int b){
    return a * b;
}
float divide(int a, int b){
    return (float)a/b;
}
int main(void){
    int choice;

    printf("===Lets Calculate===\n");

    while(1){

        printf("1.Add\n");
        printf("2.Subtract\n");
        printf("3.Multiply\n");
        printf("4.Division\n");
        printf("0.Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if(choice == 0){
            printf("Goodbye.....\n");
            break;
        }
        if(choice < 1 || choice >4){
            printf("Invalid Choice!!!\n");
            continue;
        }

        int num1;
        int num2;
        printf("Enter Your first number:");
        scanf("%d", &num1);
        printf("Enter Your second number:");
        scanf("%d", &num2);

        switch(choice){
            case 1:
            printf("Addition is %d\n", add(num1,num2));
            break;

            case 2:
            printf("Substraction is %d\n", sub(num1,num2));
            break;

            case 3:
            printf("Multiplication is %d\n",multi(num1,num2));
            break;

            case 4:
            if(num2 == 0){
                printf("You can't divide by 0!!\n");
            }else{
                printf("Divison is %.2f\n", divide(num1,num2));
            }
            break;

            default:
            printf("Error!");
        }

    }
    return 0;

}