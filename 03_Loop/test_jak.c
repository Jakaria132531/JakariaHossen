#include <stdio.h>

int main()
{
    int vehicleType, duration, rate, fee;
    char choice;

    do
    {
        printf("\n1. Motorcycle - 20 tk/hour\n");
        printf("2. Car        - 50 tk/hour\n");
        printf("3. Bus        - 100 tk/hour\n");
        printf("4. Truck      - 120 tk/hour\n");

        /* repeat until vehicle type is 1 to 4 */
        do
        {
            printf("Enter vehicle type (1-4): ");
            scanf("%d", &vehicleType);
        } while (vehicleType < 1 || vehicleType > 4);

        /* repeat until duration is positive */
        do
        {
            printf("Enter duration (hours): ");
            scanf("%d", &duration);
        } while (duration <= 0);

        /* switch only chooses the rate */
        switch (vehicleType)
        {
        case 1: rate = 20;  break;
        case 2: rate = 50;  break;
        case 3: rate = 100; break;
        case 4: rate = 120; break;
        }

        fee = rate * duration;
        printf("Parking fee: %d tk\n", fee);

        printf("Another vehicle? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}