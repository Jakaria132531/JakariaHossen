#include<stdio.h>
int main(){
int choise,violatiionType;

    printf("Select veichle type._\n"
"1.Motorcycle\n"
"2.Car\n"
"3.Bus\n"
"4.Truck\n" );
scanf("%d",&choise);


switch (choise)
{
case 1:
printf("Choose Traffic Violation_\n"
"1.Overspeeding\n"
"2.No Helmet (Motorcycle)\n"
"3.No Seat Belt\n"
"4.Red Light Violation\n"  );
scanf("%d",&violatiionType);
switch (violatiionType)
{
case 1:
printf("Overspeeding -- Fine (tk) 2,000");
break;
case 2:
printf("No Helmet (Motorcycle) -- Fine (tk) 1,000");
break;
case 3:
printf("No Seat Belt -- Fine (tk) 1,000");
break;
case 4:
printf("Red Light Violation -- Fine (tk) 1,500");
break;

default: printf("enter a valid number");
    break;
}

break;


case 2:
printf("Choose Traffic Violation_\n"
"1.Overspeeding\n"
"2.No Helmet (Motorcycle)\n"
"3.No Seat Belt\n"
"4.Red Light Violation\n"  );
scanf("%d",&violatiionType);
switch (violatiionType)
{
case 1:
printf("Overspeeding -- Fine (tk) 2,000");
break;
case 2:
printf("No Helmet (Motorcycle) -- Fine (tk) 1,000");
break;
case 3:
printf("No Seat Belt -- Fine (tk) 1,000");
break;
case 4:
printf("Red Light Violation -- Fine (tk) 1,500");
break;

default: printf("enter a valid number");
    break;
}

break;



case 3:
printf("Choose Traffic Violation_\n"
"1.Overspeeding\n"
"2.No Helmet (Motorcycle)\n"
"3.No Seat Belt\n"
"4.Red Light Violation\n"  );
scanf("%d",&violatiionType);
switch (violatiionType)
{
case 1:
printf("Overspeeding -- Fine (tk) 2,000");
break;
case 2:
printf("No Helmet (Motorcycle) -- Fine (tk) 1,000");
break;
case 3:
printf("No Seat Belt -- Fine (tk) 1,000");
break;
case 4:
printf("Red Light Violation -- Fine (tk) 1,500");
break;

default: printf("enter a valid number");
    break;
}

break;



case 4:
printf("Choose Traffic Violation_\n"
"1.Overspeeding\n"
"2.No Helmet (Motorcycle)\n"
"3.No Seat Belt\n"
"4.Red Light Violation\n"  );
scanf("%d",&violatiionType);
switch (violatiionType)
{
case 1:
printf("Overspeeding -- Fine (tk) 2,000");
break;
case 2:
printf("No Helmet (Motorcycle) -- Fine (tk) 1,000");
break;
case 3:
printf("No Seat Belt -- Fine (tk) 1,000");
break;
case 4:
printf("Red Light Violation -- Fine (tk) 1,500");
break;

default: printf("enter a valid number");
    break;
}

break;

default: printf("enter a valid number.");
    break;
}





    return 0;
}