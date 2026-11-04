#include<stdio.h>

int main(){

    // Variable declaration and initialization
    int attempt=0, pin=1234, pinStore;
    // The do-while loop allows the user to enter the PIN
    do
    {
        // Taking PIN input from the user
        printf("Enter a pin_");
        scanf("%d",&pinStore);
        // Checking whether the entered PIN matches the stored PIN
        if (pin==pinStore)
        {
            // If the PIN is correct, access is granted
            printf("Access Granted.\n");
            break;
        }                
        // Executes when the entered PIN is incorrect
        else if (attempt<3) {
            // Displaying an incorrect PIN message
            printf("wrong password.\n");
            // Increasing the attempt counter
            attempt++;
            // Showing the number of attempts already used
            printf("you can try only 3 times.you've tried %d times\n",attempt);
        }
        // Checking whether the maximum number of attempts is reached
        if (attempt==3){
            printf("Access Denied.");
        }
    // Repeating the loop until the maximum attempts are reached
    } while (attempt!=3);


    
    return 0;
}