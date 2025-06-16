#include<stdio.h>

int main(){

    // correct declarations:
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e; // we declared c but did not gave it a value so its correct

    int oldAge = 22;
    
    /*
        int newAge = oldAge + years;
        int years = 7;


        it will show errors since we used variable before declaring it
    */
    
    // correct way
    int years = 7;
    int newAge = oldAge + years;
    
    int x, y, z;    // we can declare multiple variable at once
    x = y = z = 4;  // this is valid too



    /*
        int x = y = z = 4;

        this is wrong way,
        since we cant use or declare a variable at same time

        here we are assigning z with 4, then declaring it, then assingning y as z and declaring it
    */

    return 0;
}