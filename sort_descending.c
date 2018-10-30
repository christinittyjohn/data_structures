/* Sort array of integers in descending order.. */
#include<stdio.h>

int order(int a, int b)
{
	//returns 1 if a is less  than b.
	if(a>b)
		return 0;
	else if(a<b)
		return 1;
}
void swap(int *a, int *b)
{
	//swaps contents of address a and address b.
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
}				
int main()
{
	int numbers[] = {15,48,10,0,-8,7},i=0,j=0;
	i=5;
	while(i>=0)
	{	//loops from 5 to 0
		j=0;
		while(j<i)
		{
			//loops till current value of i so that lesser values will move to the end of the array.
			if(order(numbers[j],numbers[j+1]))
				swap(&numbers[j],&numbers[j+1]);
			j++;
		}
		i--;
	}
	while(j<6)
	{
		//prints the array.
		printf("%d \t",numbers[j]);
		j++;
	}	
	return 0;
}

				
			
