#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <crypt.h>



int main(int argc, string argv[])
{
    
    
// only accept one word for key
if (argc != 2)
{
    printf("error, invalid hash\n");
    return 1;
}
else 
printf("Iterating through password possible combinations by brute force in attempt to find password for %s. Please wait, this may take a moment...\n", argv[1]);
string hash = argv[1];
string test;



{
    
    char brute[5] = "\0";



     // iterate through all pw lengths of 1
    for(brute[0]='A';brute[0]<='z';brute[0]++)
       {
           test = crypt(brute, "50");
           if( strcmp(hash,test)==0 )
             {   
                printf("Success!! The original password is-> %s\n", brute);
                return(0);
             }  
       }
                
                // iterate through all pw lengths of 2
                
           for(brute[0]='A';brute[0]<='z';brute[0]++)
       {
           for(brute[1]='A';brute[1]<='z';brute[1]++)
              {
                  test = crypt(brute, "50");
                if( strcmp(hash,test)==0 )
                {
                printf("Success!! The original password is-> %s\n", brute);
                return(0);
                }
              }
       }
                    // iterate through all pw lengths of 3
                    
            for(brute[0]='A';brute[0]<='z';brute[0]++)
       {
            for(brute[1]='A';brute[1]<='z';brute[1]++)
            
            for(brute[2]='A';brute[2]<='z';brute[2]++)
             {
                 test = crypt(brute, "50");
                if( strcmp(hash,test)==0 )
               { 
                printf("Success!! The original password is-> %s\n", brute);
                return(0);
               }
             }
       }
                 // iterate through all pw lengths of 4
                 
                  for(brute[0]='A';brute[0]<='z';brute[0]++)
       {
                  for(brute[1]='A';brute[1]<='z';brute[1]++)
            
                  for(brute[2]='A';brute[2]<='z';brute[2]++)
            
                  for(brute[3]='A';brute[3]<='z';brute[3]++)
            {
                
                test = crypt(brute, "50");
                if( strcmp(hash,test)==0 )
                {
                printf("Success!! The original password is-> %s\n", brute);
                return(0);
                }
            }
                
       } 
            
        
    
    
    
              
    }                    

    
{
   printf("Unable to crack password. Perhaps password is outside of parameter. Reminder: this programme only works for passwords of up to 4 alphabetica characters in length.\n");
   return(1);
}
}

