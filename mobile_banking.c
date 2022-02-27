// Author: Mohammad Mahfuz
// gmail: mohammodmahfuz1703@gmail.com
#include <stdio.h>

int main(){
    printf("          Welcome to our service");
    int ch, pin, num, balance = 500, taka;
    int b = balance - taka;

    printf("\n\n1. Check balance\n2. Send money\n3. Cashout\n4. Contact Us\n5. Exit\n");
    printf("Choose your option:");

    scanf("%d", &ch);

    switch(ch){
    case 1:
        printf("Enter your correct pin here:");
        scanf("%d", &pin);

        if(pin == 1703){
            printf("\n\nYour balance is BDT %d taka", balance);
        }
        else{
            printf("Incorrect your pin");
        }
        break;
    case 2:
        printf("Enter your number:");
        scanf("%d", &num);
        printf("Enter your amount:");
        scanf("%d", &taka);
        printf("Enter your pin:");
        scanf("%d", &pin);

        if(pin == 1703){
            printf("You are successful to sent money BDT %d taka\n and your new balance is BDT %d taka", taka, b);
        }
        else{
            printf("Incorrect your pin");
        }
        break;
    case 3:
        printf("Enter your agent number:");
        scanf("%d", &num);
        printf("Enter your amount:");
        scanf("%d", &taka);
        printf("Enter your pin:");
        scanf("%d", &pin);
        if(pin == 1703){
            printf("You are successful to cashout BDT %d taka\n and your new balance is BDT %d taka", taka, b);
        }
        else{
            printf("Incorrect your pin");
        }
        break;
    case 4:
        printf("If you have any problem call us 17032001");
        break;
    case 5:
        printf("Select another option\n");
        break;
    }
    printf("\nThank you..\n");
    return 0;

}
