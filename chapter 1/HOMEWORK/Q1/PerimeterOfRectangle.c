#include<stdio.h>

int main(){

    float length, breadth, sum; 

    printf("enter length = ");
    scanf("%f", &length); // taking length

    printf("enter breadth = ");
    scanf("%f", &breadth); // taking breadth

    sum = length + breadth; // adding them

    printf("Perimeter is = %f", 2 * sum);



    return 0;
}