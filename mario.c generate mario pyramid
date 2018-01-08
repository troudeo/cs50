#include <cs50.h>
#include <stdio.h>

int main(void)
{
int height;
int hash = 2;
int space = 0;
// get height from user
do
{
    printf("height: ");
    height = get_int();
} while (height<0 || height>23);



// generate pyramid
space = height + 1 - hash;
while (space > -1)
{ 
    int spaceL = space;
    int hashL = hash;
    
    while (spaceL > 0)
    {
        printf(" ");
        spaceL--;
    }
    
    while (hashL > 0)
    {
        printf("#");
        hashL--;
    }
    
    printf("  ");
    
    hashL = hash;
    while (hashL > 0)
   {
       printf("#");
       hashL--;
   }
    
    printf("\n");
    
    space--;
    hash++;
   
}


}
