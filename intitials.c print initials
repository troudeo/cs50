#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{ 
    string name;
   
// get user to input their name
     name = get_string();
     
// due to first letter being an exception due to not being in front of a space this prints first letter if criteria is met

    for (int i = 0, n = strlen(name); i < n; i++)
    {
    if(name[0] >= 'a' && name[0] <= 'z' && i==0)
   { 
    printf("%c", toupper(name[0]));
   }
   if(name[0] >= 'A' && name[0] <= 'Z' && i==0)
   { 
    printf("%c", (name[0]));
   }
    }
    
// iterate through the string and print letters in upper case if criteria is met

   for (int i = 0, n = strlen(name); i < n; i++)
   {
    if (name[i-1] == ' ' && name[i] >= 'a' && name[i] <= 'z')
    {
        printf("%c", toupper(name[i]));
       
   }
    
    if (name[i-1] == ' ' && name[i] >= 'A' && name[i] <= 'Z')
    {
        printf("%c", toupper(name[i]));
       
   }
   }
   printf("\n");

}

