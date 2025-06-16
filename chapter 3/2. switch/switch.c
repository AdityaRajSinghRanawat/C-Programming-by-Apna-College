#include<stdio.h>

int main(){


    // if break is not added then all the cases will be run

    int day;                        // 1-mon; 2-tue; 3-wed.....
    printf("enter day (1 to 7) = ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break; // if it is removed then after execution it will go till tuesday and comes out, MondayTuesday
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break; //if we remove all break from here then it will start print from here, not above three days
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Satday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("enter correct number");
        break;
    }




    return 0;




    /*
        switch Properties:

        a. Cases can be in any order
        b. Nested switch (switch inside switch) are allowed
    */



   // NESTED SWITCH:

   int month;

   switch (day)
    {
    case 1:
        switch (month)
        {
            case 1:
                printf("January \n");
                break;
            default:
                printf("I dont know month\n");
        }

        printf("Monday");
        break; 


    case 2:
        printf("Tuesday");
        break;
    
    
    default:
        printf("enter correct number");
        break;
    }

}