#include<stdio.h>

int main(){
    
    int num;
    printf("Enter a Price = ");
    scanf("%d", &num);
    printf("Decision = %d", num > 9 && num < 100);

    
    return 0;
}