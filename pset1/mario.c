/*
    mario.c
    
    Implement a program that prints out a half-pyramid of a specified height using #'s'.
    
    Author: James Jung, theJcode24
    
    This file is a solution of the mario mario problem from
    pset1 of CS50.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    // Take user input, check, then asks for input again if not within 
    // permitted range.
    for(int height = 0; height > 0 || height < 23; height++) 
    {
        printf("Height: ");
        height = GetInt();
        if (height == 0)
        {
            
        }

    /* 
        Nested loops handle the number of rows and the printing of # 
            and space characters.
        The outermost loop handles the number of rows.
        The first inner loop handles the printing of spaces.
        The second inner loop handles the printing of # characters.
        
    */
    
        for(int i = 0; i < height; i++)
        {
            
            // Number of spaces.
            
            for(int j = 0; j < height-i-1; j++) 
            {
                printf("%s", " ");
            }
            
            // Number of #'s.
            for(int k = 0; k <= i+1; k++)
            {
                printf("#");
            }
            printf("\n");
        }

    }
}

    

