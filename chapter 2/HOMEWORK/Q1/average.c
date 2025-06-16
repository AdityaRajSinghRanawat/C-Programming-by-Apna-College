#include<stdio.h>

int main(){
    
    float num1, num2, num3;

    printf("Enter 3 numbers \n");
    scanf("%f %f %f", &num1, &num2, &num3);


    printf("Average = %f", (num1+num2+num3)/3);

    
    return 0;
}