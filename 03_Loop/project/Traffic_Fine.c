
#include <stdio.h>

int main()
{
     int choise, violatiionType;

     int fine = 0, total = 0;
    int Overspeeding = 0;
    int No_Helmet = 0;
    int Red_Light = 0;
    int No_Seat_Belt = 0;

     int overChoice;

     printf("Select veichle type._\n"
           "1.Motorcycle\n"
           "2.Car\n"
           "3.Bus\n"
           "4.Truck\n");

     scanf("%d", &choise);

     switch (choise)
    {
    case 1:

         do
        {
             printf("Choose Traffic Violation_\n"
                   "1.Overspeeding\n"
                   "2.No Helmet (Motorcycle)\n"
                   "3.Red Light Violation\n");

             scanf("%d", &violatiionType);

             switch (violatiionType)
            {
            case 1:

                 Overspeeding += 2000;

                break;

            case 2:

                 No_Helmet += 1000;

                break;

            case 3:

                 Red_Light += 1500;

                break;

            default:

                 printf("enter a valid number");

                break;
            }

             printf("Do you have any more violation?\n"
                   "If Yes,enter 1. If No,enter 2\n_");

             scanf("%d", &overChoice);

        } while (overChoice != 2);

         total = Overspeeding + Red_Light + No_Helmet;

         printf("\nYour total violation bil is=%d.%d for overspeed,%d for No helmet, %d for red light\n",
               total, Overspeeding, No_Helmet, Red_Light);

        break;

    case 2:

         do
        {
             printf("Choose Traffic Violation_\n"
                   "1.Overspeeding\n"
                   "2.No Seat Belt\n"
                   "3.Red Light Violation\n");

             scanf("%d", &violatiionType);

             switch (violatiionType)
            {
            case 1:

                 Overspeeding += 2000;

                break;

            case 2:

                 No_Seat_Belt += 1000;

                break;

            case 3:

                 Red_Light += 1500;

                break;

            default:

                 printf("enter a valid number");

                break;
            }

             printf("Do you have any more violation?\n"
                   "If Yes,enter 1. If No,enter 2\n_");

             scanf("%d", &overChoice);

        } while (overChoice != 2);

         total = Overspeeding + Red_Light + No_Seat_Belt;

         printf("\nYour total violation bil is=%d.%d for overspeed,%d for No helmet, %d for red light\n",
               total, Overspeeding, No_Seat_Belt, Red_Light);

        break;

    case 3:

         do
        {
             printf("Choose Traffic Violation_\n"
                   "1.Overspeeding\n"
                   "2.No Seat Belt\n"
                   "3.Red Light Violation\n");

             scanf("%d", &violatiionType);

             switch (violatiionType)
            {
            case 1:

                 Overspeeding += 2000;

                break;

            case 2:

                 No_Seat_Belt += 1000;

                break;

            case 3:

                 Red_Light += 1500;

                break;

            default:

                 printf("enter a valid number");

                break;
            }

             printf("Do you have any more violation?\n"
                   "If Yes,enter 1. If No,enter 2\n_");

             scanf("%d", &overChoice);

        } while (overChoice != 2);

         total = Overspeeding + Red_Light + No_Seat_Belt;

         printf("\nYour total violation bil is=%d.%d for overspeed,%d for No helmet, %d for red light\n",
               total, Overspeeding, No_Seat_Belt, Red_Light);

        break;

    default:

         printf("enter a valid number.");

        break;
    }

     return 0;
}
