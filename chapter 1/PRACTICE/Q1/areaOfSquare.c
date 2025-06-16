#include<stdio.h>

int main(){

    int side; // we could have used float and %f

    printf("Please enter the side of square ");
    scanf("%d", &side); 

    printf("Area is = %d", side * side);



    return 0;
}