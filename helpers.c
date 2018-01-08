/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include <stdio.h>

#include "helpers.h"

#include <math.h>

bool search(int value, int values[], int n);

   
   
   bool search(int value, int values[], int n)
  {
    int first, last, middle;
    
  first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
    
    if (n <= 0)
        
        return false;
    
    if (n >= 1)
       
       while (first <= last)
       {
      if (values[middle] < value)
         first = middle + 1;    
      else if (values[middle] == value) 
      {
         return true;
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
    
        }
    if (first > last)
    {
        return false;
    
    }
        
 return false;
 }
    
#define LIMIT 65536
void sort(int values[], int n);

void sort(int values[], int n)
{
   
    int count[LIMIT];
    for (int r = 0; r < LIMIT; r ++)
    {
        count[r] = 0;
        continue;
    }
    for( int i = 0; i < n; i++)
        {
            int k;
            k = values[i];
            count[k] = +1;
            continue;
        
        }   
    
    for (int j = 0; j < n; j++)
        {
            int x = 0;
            do 
            {
                x++;
            }
                
            while (count[x] <= 0);
            
            if (count[x] == 1)
            {
            
            count[x] = 0;
    
            values[j]= x;
            }
    
        if (count[x] > 1)
            {
                for (int y = 0; y < count[x]; y++) 
                    {
                        values [j+y] = x;
                        
                    }
            
                j = j + count[x]-1;
                count[x] = 0;
        
            
             }
    
            else continue;
           
        }
    
}

