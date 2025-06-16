#include<stdio.h>

int main(){
    int num;
    printf("Enter a number = ");   
    scanf("%d", &num);

    printf("Divisiblity = %d", num%2 == 0); 
    
    return 0;
}