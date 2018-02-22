#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    printf ("name\n");
    string name = get_string();
    
    int x = 0;
    printf("%c\n", toupper(name[0]));
    for (int i = 0; i <= strlen(name); i++)
    {   
        
        
        if(x==1)
        {
           printf("%c\n", toupper(name[i]));
           x = 0;
        }
        else if (name[i] == ' ' )
        {
            x=1;
        }
        else
        {
            
        }
        
    }
    
}