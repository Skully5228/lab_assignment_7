//Justin Rimmeli
//5299451
//Lab Assignment #7

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    
    int i;
    int y;
    int x;
    int temp, temp2;
    int swapsAtEachIndex[] = {0,0,0,0,0,0,0,0,0};
    int bubbleSortArray[] = {97,16,45,63,13,22,7,58,72};
    for (y = 0; y < 8; y++)
    {
        for (i = 0; i < 8 - y; i++)
        {
            if(bubbleSortArray[i] > bubbleSortArray[i+1])
            {
                temp = bubbleSortArray[i];
                temp2 = bubbleSortArray[i+1];
                
                //swapping the numbers using the temp variables above
                bubbleSortArray[i] = temp2;
                bubbleSortArray[i+1] = temp;
                
                //this counts the swap at the index it happens using another separate array
                swapsAtEachIndex[i] = swapsAtEachIndex[i] + 1;
            }
        }
    }


    printf("final sorted array after bubble sort:\n");
    for (x = 0; x < 9; x++)
    {
        printf("%d ", bubbleSortArray[x]);
    }
    
    printf("\n\n");
    
    printf("number of swaps needed for each index in the array:\n");
    for (x = 0; x < 9; x++)
    {
        printf("%d ", swapsAtEachIndex[x]);
    }

}