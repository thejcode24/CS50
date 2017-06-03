/*
    vigenere.c
    
    Author: James Jung, theJcode24
    
    This file is a solution of the Vigenere problem from
    pset2 of CS50.
*/


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool keySuccessful = false;
string key = "";
string text = "";
int text_length = 0;

int main(int argc, string argv[])
{
    // Gets key from commandline and checks if there are 2 command line arguments
    // and checks if that input is a integer.
    do {
        if (argc != 2)
        {
            printf("Error. Please enter a valid word for the key value.\n");
            return 1;
        }
        else 
        {   
            // Binds key as a integer.
            keySuccessful = true;
            printf("%s\n", key);
        }
    }while(!keySuccessful);
    
    // Prompt user for plaintext.
    printf("Please enter text you want to encode Vignere-style.\n");
    text = get_string();
    text_length = strlen(text);
    
    // Iterate through the words in plaintext.
    for( int i = 0; i < text_length; i++) 
    {
        // Checks if letter is a alphabetical letter.
        if(isalpha(text[i]))
        {
            // Handles lower case letters.
            if(islower(text[i])) 
            {
                printf("%c", (((text[i]-97)+key)%26)+97);
    
            }
            
            // Handles upper case letters.
            else
            {
                printf("%c", (((text[i]-65)+key)%26)+65);
            }
        }
        
        // Print non-letters as is.
        else
        {
            printf("%c", text[i]);
        }
    }
    // Exit.
    printf("\n");
    return 0;
}
