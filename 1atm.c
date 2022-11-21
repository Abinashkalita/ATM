#include <stdio.h>

int main()
{
    int user1, user2, user3, i=1;
    while (i==1){
        printf("enter the INR of user1: ");
        scanf("%d", &user1);
        printf("enter the INR of user2: ");
        scanf("%d", &user2);
        printf("enter the INR of user3: ");
        scanf("%d", &user3);

        if (user1<=3000){
            printf("User 1: Sorry Transaction failed\n");
        }
        else {
            printf("User 1: You can perform your transaction.\n");
        }

        if (user2<=3000){
        printf("User 2: Sorry Transaction failed\n");
        }
        else {
            printf("User 2: You can perform your transaction.\n");
        }

        if (user3<=3000){
        printf("User 3: Sorry Transaction failed\n"); 
        }
        else {
            printf("User 3: You can perform your transaction.\n");
        }
        printf("Enter '1' to continue\nEnter '2' to exit: ");
        scanf("%d", &i);
        if (i == 2){
            printf("\n\t--THANK YOU--\n");
        }
    }
    return 0;
}