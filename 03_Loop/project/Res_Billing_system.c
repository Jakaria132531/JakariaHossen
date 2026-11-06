
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
     int quantity, choice;

    float Discount_price, Total_price, total, Total_fPrice = 0;

    char choiceMore[20];

    bool Ischoice = false;

    do
    {
         printf("Enter your choice\n"
               "1.Burger -- price:250tk\n"
               "2.Pizza -- price:450tk\n"
               "3.Chicken Fry -- price:180tk\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("If you want 30 percent discount, you'll have to purces at least 3 burgers.\n");

            printf("Enter quantities_");
            scanf("%d", &quantity);

            while (getchar() != '\n');

            total = (250.00 * quantity);

            if (quantity >= 3)
            {
                Discount_price = total * 0.3;
                total = total - Discount_price;
            }

            printf("Do you want more?\nEnter Yes or No._");
            fgets(choiceMore, sizeof(choiceMore), stdin);

            choiceMore[strcspn(choiceMore, "\n")] = '\0';

            if (strcmp(choiceMore, "Yes") == 0 ||
                strcmp(choiceMore, "yes") == 0)
            {
                Ischoice = true;
            }

            if (strcmp(choiceMore, "No") == 0 ||
                strcmp(choiceMore, "no") == 0)
            {
                Ischoice = false;
            }

            break;

        case 2:

            printf("If you want 50 percent discount, you'll have to purces at least 3 Pizzas.\n");

            printf("Enter quantities_");
            scanf("%d", &quantity);

            while (getchar() != '\n');

            total = (450.00 * quantity);

            if (quantity >= 3)
            {
                Discount_price = total * 0.5;
                total = total - Discount_price;
            }

            printf("Do you want more?\nEnter Yes or No._");
            fgets(choiceMore, sizeof(choiceMore), stdin);

            choiceMore[strcspn(choiceMore, "\n")] = '\0';

            if (strcmp(choiceMore, "Yes") == 0 ||
                strcmp(choiceMore, "yes") == 0)
            {
                Ischoice = true;
            }

            if (strcmp(choiceMore, "No") == 0 ||
                strcmp(choiceMore, "no") == 0)
            {
                Ischoice = false;
            }

            break;

        case 3:

            printf("If you want 15 percent discount, you'll have to purces at least 3 Chicken Fries.\n");

            printf("Enter quantities_");
            scanf("%d", &quantity);

            while (getchar() != '\n');

            total = (180.00 * quantity);

            if (quantity >= 3)
            {
                Discount_price = total * 0.15;
                total = total - Discount_price;
            }

            printf("Do you want more?\nEnter Yes or No._");
            fgets(choiceMore, sizeof(choiceMore), stdin);

            choiceMore[strcspn(choiceMore, "\n")] = '\0';

            if (strcmp(choiceMore, "Yes") == 0 ||
                strcmp(choiceMore, "yes") == 0)
            {
                Ischoice = true;
            }

            if (strcmp(choiceMore, "No") == 0 ||
                strcmp(choiceMore, "no") == 0)
            {
                Ischoice = false;
            }

         //   printf("you've taken =%d Chicken Fry.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n", quantity, total, Discount_price, Total_price);

            break;

        default:

            printf("Enter a valid number from given range.Try again.\n");
        }

        Total_fPrice += total;

    } while (Ischoice);

    printf("\nNew Total price= %.2f\n", Total_fPrice);



    
    return 0;
}
