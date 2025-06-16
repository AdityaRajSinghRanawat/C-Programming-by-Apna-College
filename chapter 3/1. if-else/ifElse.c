#include<stdio.h>

int main(){

    // 1) if-else:

    int age;

    printf("enter age = ");
    scanf("%d", &age);
    printf("\n");

    if(age>18){
        printf("adult \n");
        printf("they can vote\n");
    }
    else{
        printf("NOT adult \n");
        printf("they can NOT vote \n");
    }
    // if/else{BLOCK} : the space between the curly braces is called a block, it is combination of statements

    printf("thank you \n\n");











    // if only one statement is written then also it will execute that statement
    if(age>18){
        printf("adult \n");
        printf("they can vote\n");
    }

    printf("thank you \n\n");













    // or multiple statements w need to use {}, but for single statements we do not need them
    if(age>18)
        printf("adult \n\n");
    else
        printf("NOT adult \n\n");
    // but as a GOOD PROGRAMER you should always use {}






    /*
        ERROR:
        "else" should come immidiately after "if"


        if(age>18)
            printf("adult \n");
            printf("they can vote\n");

        else
            printf("NOT adult \n");
    */

















   // 2) else-if:



    /* 
        if 
        else if
        else if
        else if
        else if
        .           
        .           <=== n number of else if
        .

        else if
        else        executed [only when none is TRUE]
    */


   /* 
        if          FALSE , not-executed
        else if     FALSE , not-executed
        else if     TRUE  , executed        <=== this breaks the chain
        else if     TRUE  , not executed
        else if     FALSE , not-executed
        .           
        .           <=== even if following are TRUE they will not be executed
        .

        else if     TRUE  , not executed
        else        executed [only when none is TRUE]
    */

   /* 
        if     FALSE , not-executed
        if     FALSE , not-executed
        if     TRUE  , executed
        if     TRUE  , executed
        if     FALSE , not-executed
        .      <=== if following are TRUE they will be executed or if FALSE then not executed
        .
        .

        if     TRUE  , executed
        else   executed [only when none is TRUE]
    */







    // if > else-if > else-if > else
    if(age >= 18){
        printf("adult \n");
    }
    else if(age > 13 && age < 18){
        printf("teenager \n");
    }
    else if(age < 60){
        printf("not retired \n");
    }
    else{
        printf("chiild \n");
    }






    printf("\n");






    // if > if > if > else
    if(age >= 18){
        printf("adult \n");
    }
    if(age > 13 && age < 18){
        printf("teenager \n");
    }
    if(age < 60){
        printf("not retired \n");
    }
    else{
        printf("chiild \n\n");
    }

    printf("\n");


   



    // TERNARY OPERATOR:
    // to convert multiple lines of code into 1 line

    // ? = check condition
    // : = else


    age >= 18 ? printf("ternary = adult \n") : printf("ternary = NOT adult \n"); 

    printf("\n");



    // NESTED IF:

    int num;

    printf("enter number = ");
    scanf("%d", &num);
    printf("\n");


    if(num >= 0)
    {
        printf("positive \n");

        if(num % 2 == 0){
            printf("even");
        } else {
            printf("odd");
        }

    } else {
        printf("negative");
    }




    return 0;
}























