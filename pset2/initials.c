/*
    initials.c
    
    Design and implement a program, initials, that, given a person’s name, prints a person’s initials
    
    Author: James Jung, theJcode24
    
    This file is a solution of the initials problem from
    problem set 2 of CS50 on edX.com.

*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    string s = "";
    printf("Enter a name: ");
    s = get_string();
    printf("%c", toupper(s[0]));   
    
    // Loop through length of string.
    for (int i = 0; i < strlen(s); i++)
    {   
        // check if the character 1 before the index i is a space character (ASCII 32)
        // and print the character at index i as upper case letter if so.
        if (s[i-1] == 32) 
        {
            printf("%c", toupper(s[i]));
        }
    
    }
    printf("\n");
}