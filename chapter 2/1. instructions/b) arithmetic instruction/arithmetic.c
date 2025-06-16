#include<stdio.h>
#include<math.h>

int main(){


    int a = 1, b = 1, c=1;
    int sum = a + b;
    int multiply = a * b;

    /*
        LHS      RHS
        var = a + b - c * d;


        Value stores from RHS to LHS
        i.e.
        LHS <==== RHS

        assign single variable on the LHS
    */


   int x, y = a * b; // you might think x and y are assigned a*b, but it is assigned only for y




    int power = pow(b,c); // b^c    // REQUIRED: include <math.h> library
    printf("pow(b,c) = %d\n", power);



    int powerZour = b^c; 
    /*
        zour operator(^) = performed between bits, when use it in between same bits, it gives zero
        here b = 1 and c = 1, b(zour)c = 0
    */
    printf("b^c = %d \n", powerZour);



    // MODULAR OPERATOR (also called modulo)

    printf("16 modular 10 = %d \n", 16 % 10);

    // printf("%d", 1.6 % 1.0)          || it does not work on float



    // numerator = negative, result = negative 
    // numerator = positive, result = positive

    printf("-8 modular 3 = %d \n", -8 % 3);
    printf("8 modular 3 = %d \n", 8 % 3);



    /*  
        int     op  int     = int
        float   op  float   = float
        int     op  float   = float

        op = operator/ operation     
    */

    /*
        int           op       float         ====>      float
        small box              large box     ====>      large box
    */


    // printf("2.2 X 3 =  %d", 2.2 * 3);    || it will show error, since we tried to print float as int(%d)
    printf("2.2 X 3 =  %f \n", 2.2 * 3);





    printf("4 / 3.2 =  %f \n", 4 / 3.2);
    printf("4.5 / 3.2 =  %f \n", 4.5 / 3.2);
    printf("4.5 / 3 =  %f \n", 4.5 / 3);



    printf("4 / 3 =  %d \n", 4 / 3);
    printf("4 / 3 =  %f \n", 4 / 3);    // its short of integer rounded off (1.3333 => 1.5000)
    printf("4.0 / 3 =  %f \n", 4.0 / 3);




    int num = 1.999999;                       // num should be 1 or 2?
    

    /*
        printf("%d \n", num);

        ERROR:
        conversion from "double" to "int" is not possible (implicit conversion)
    */


   /*
        CONVERSION:
        1. implicit conversion [internal] (compier does it on its own)
        2. explicit conversion [external] (done by the user/ programmer)
        
        It state that small datatypes like "int" can store in big datatypes like "float"
        but reverse is not possible

        int             ===> float, double  [POSSIBLE]
        float, double   ===> int            [NOT POSSIBLE]
   */



    int newNum = (int) 1.999999;
    printf("newNum = %d \n", newNum);


    /*
        Default:
        all the float values in c are seen as double

        Converion:
        double ===> int

        it removes .999999 from 1.999999
        it does not round off the value, it directly removes it
    */



    // OPERATION PRECEDENCE:

    //       (*, /, %)  ===>    (=, -)   ===>    (=)    

    printf("4 + 9 * 10 = %d \n", 4 + 9 * 10);






    // ASSOCIATIVITY (for same precedence):

    // left to right

    printf("4 * 3 / 6 * 2 = %d \n", 4 * 3 / 6 * 2);     // [{(4*3)/6}*2] = 4
    printf("5 * 2 - 2 * 3 = %d \n", 5 * 2 - 2 * 3);     // 10 - 6        = 4
    printf("5 * 2 / 2 * 3 = %d \n", 5 * 2 / 2 * 3);     // [{(5*2)/2}*3] = 15 
    printf("5 * (2 / 2) * 3 = %d \n", 5 * (2 / 2) * 3); // (5*1*3)       = 15
    printf("5 + 2 / 2 * 3 = %d \n", 5 + 2 / 2 * 3);     // 5+[{2/2}*3]   = 8


    // ; = terminator (stops something), ends a statement















    return 0;
}