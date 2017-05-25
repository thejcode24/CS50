/*
    water.c
    
    Author: James Jung, theJcode24
    
    This file is a solution of the water problem from
    pset1 of CS50.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Receive input for minutes
    int min, bottles;
    printf("minutes: ");
    min = get_int();
    
    
    // Output number of bottles 
    bottles = min * 12;
    printf("bottles: %d\n", bottles);


}