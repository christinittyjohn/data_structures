#include<stdio.h>
//algorithm from data structures by samantha d. 
int sort(int a, int b)
{
    if(a>b)
    return 0;
    else
    return 1;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}                    
            
int main()
{
    //sorts an array of integers in ascending order.
    int i,length_of_numbers=10;
    int numbers[] = {10,4,5,8,7,45,2,1,0};//declaration
    i=9;
    while(i>=0)
    {
       // i goes from max to 0. 
       int j=0;
       while(j<i)
       { 
          /*for each i from max to 0, j will loop from 0 to i -1.
          i.e the greater numbers that the j loop finds will be placed towards the end of the loop,
          ie 9,8,7 etc*/
           if(!sort(numbers[j],numbers[j+1]))
           swap(&numbers[j],&numbers[j+1]);
           j++;
        }
        i--;   
    } 
    i=0; 
    while(i<9)
    {
        printf("%d\t",numbers[i]);
        i++;
    }
    printf("\n");
}

