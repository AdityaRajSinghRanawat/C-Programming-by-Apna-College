#include <stdio.h>

int main()
{

    // LOOP CONTOL INSTRUCTION:

    // To repeat some parts of the program

    /*
        Types:
        1. for (can do both while and do-while)
        2. while
        3. do-while
    */









    // 1) FOR LOOP:

    /*
        for(initialisation; condition; updation) {
        //do something
        }
    */
    int i = 0;

    printf("print hello world 5 time: \n");
    for (i = 1; i <= 5; i++)
    {
        printf("Hello World \n");
    }
    printf("\n");





    printf("print 1 to 100: \n");
    for (i = 1; i <= 100; i = i + 1)
    {
        printf("%d \n", i);
    }
    printf("\n");




    printf("print 100 to 1: \n");
    for (i = 100; i > 0; i--)
    {
        printf("%d \n", i);
    }
    printf("\n");





    /*
        INCREMENT OPERATOR:
        pre-increment   ++i
        post-increment  i++
    
        DECREMENT OPERATOR:
        pre-decrement   --i
        post-decrement  i--
    */

    i = 1;
    printf("i = 1 \n\n");
    

    printf("using i++: \n");
    // i++ = use then increase
    printf("i++ = %d \n", i++);
    printf("i = %d \n\n", i);
   
    
    i = 1;
    printf("using ++i: \n");
    // ++i = increase then use
    printf("++i = %d \n", ++i);
    printf("i = %d \n\n\n\n\n", i);















    i = 2;
    printf("i = 2 \n\n");
    

    printf("using i--: \n");
    // i-- = use then increase
    printf("i-- = %d \n", i--);
    printf("i = %d \n\n", i);
   
    
    i = 2;
    printf("using --i: \n");
    // --i = increase then use
    printf("--i = %d \n", --i);
    printf("i = %d \n\n", i);



















    // this is not valid for loops:
    printf("using i++ (1 to 5): \n");
    for (i = 1; i <= 5; i++)   // i++ = use then increase
    {
        printf("%d \n", i);
    }
    printf("\n");



    printf("using ++i (1 to 5): \n");
    for (i = 1; i <= 5; ++i)   // ++i = increase then use
    {
        printf("%d \n", i);
    }
    printf("\n");


























    // Loop counter can be float or even character

    for (int i = 0; i <= 5; i++)
    {
        printf("HELLO WORLD \n");
    }
    printf("\n");





    
    for (float i = 0; i <= 5; i++)
    {
        printf("%f \n", i);
    }
    printf("\n");




    
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c \n", ch);
    }
    printf("\n");























    // infinite loop



    // this will run until the computer memory does not gets full
    
    printf("INFITINE LOOP:\n");
    for (int i = 1;     ; i++){
        printf("%d", i);
    }
    
    
    





    // 2)
}
