#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Ask user for changed owed as float input. 
    // Use getfloat()
    float i;
    int a; 
    do {
        printf("O hai! How much change is owed? ");
        i = get_float();
    }
    // Check if user input makes logical sense
    // ie. reject negative number or letters
    while(i < 0);
    
    printf("%.2f\n", i);
    
    // Loop to check for highest coin possible.
    a = i;
    if ( a - 25 > 0 ) {
        a++;
        return a;
    }
    if( a - 10 > 0) {
        a++;
        return a;
    }
    if ( a - 5 > 0 ) {
        a++;
        return a;
    }
    
    if (a - 1 > 0 ) {
        a++;
        return a;
    }
    
    printf("%d", a);

    // When doing math, change float to int
    // and use round() function.
    
    // Process input amount and return the lowest 
    // number of coins possible for that input amount.
    
    
}