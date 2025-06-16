#include<stdio.h>

int main(){


    // 1) ARITHMETIC OPERATORS:
    // +, -, /, *, %





    // 2) RELATIONAL OPERATORS:
    // ==, >, <, <=, >=, !=

    printf("4 == 4 = %d \n", 4 == 4);
    // c is the only language which does not have True/False instead it have 1/0
    // TRUE = 1(or even: 2,3,4,5,-1,-5) || FALSE = 0

    printf("3 > 4 = %d \n", 3 > 4);
    printf("3 < 4 = %d \n", 3 < 4);
    printf("3 >= 4 = %d \n", 3 >= 4);
    printf("3 <= 4 = %d \n", 3 <= 4);
    printf("3 != 4 = %d \n\n", 3 != 4);   // ! = not







    // 3) LOGICAL OPERATORS:
    // &&, ||, !

    int a = 4 > 3;  // TRUE
    int b = 4 < 3;  // FALSE

    printf("a = %d TRUE\n", a);
    printf("b = %d FALSE\n\n", b);

    // AND
    printf("a && b = %d \n", a && b);
    printf("a && a = %d \n", a && a);
    printf("b && b = %d \n\n", b && b);
    
    // OR
    printf("a || b = %d \n", a || b);
    printf("a || a = %d \n", a || a);
    printf("b || b = %d \n\n", b || b);

    printf("!a = %d \n", !a);
    printf("!b = %d \n\n", !b);

    // for relation like: (a+b_c/d*e) > (4*3*5) && (4>2)
    // operator presedence is check
    // <<< refer to the table >>>










    // 4) BITWISE OPERATORS:
    // <<< will see in future >>>







    // 5) ASSIGNMENT OPERATORS:
    // =, +=, -=, *=, /=, %=

    int A = 5;
    int B = 3;

    
    printf("A = %d \n", A);
    printf("B = %d \n\n", B);

    A = B;
    printf("A = B = %d \n", A);

    A = 5;
    B = 3;
    A += B;     // A = A + B
    printf("A += B = %d \n", A);    

    A = 5;
    B = 3;
    A -= B;     // A = A - B
    printf("A -= B = %d \n", A);   

    A = 5;
    B = 3;
    A *= B;     // A = A * B
    printf("A *= B = %d \n", A);      

    A = 5;
    B = 3;
    A /= B;     // A = A / B
    printf("A /= B = %d \n", A);     

    A = 5;
    B = 3;
    A %= B;     // A = A % B
    printf("A modulo= B = %d \n", A);  




 


    // 6) TERNARY OPERATORS:
    
    // to convert multiple lines of code into 1 line

    // ? = check condition
    // : = else

    int age = 20;
    age >= 18 ? printf("ternary = adult \n") : printf("ternary = NOT adult \n"); 

    printf("\n");


    return 0;
}