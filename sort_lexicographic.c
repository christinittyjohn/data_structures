// sorts an array of characters lexicographically.
#include<stdio.h>
#include<string.h> //to use strcmp.
int order(char *a, char *b)
{
	//returns int from strcmp of a and b. 0 if equal, >0 if greater than <0 if less than.
	return strcmp(a,b);
}
void swap(char *a, char *b)
{
	char temp[3];
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
	/*normal methods for pointer swaping did not work since
	 we are working with string rather than characters.
	So, string copy function is utilized to copy the contents in the addresses.*/
}
int main()
{
	char character[][3]={"ab","zy","po","er","as","cd"};
	int i=5,j=0;
	while(i>=0)
	{
		//i loops from 5 to 0.
		j=0;
		while(j<i)
		{
		 //goes from 0 to i-1 so lexicographically higher values are moved to the end of the array.
			if(order(character[j],character[j+1])>0)
				swap(&character[j],&character[j+1]);
			j++;
		}
		i--;
	}
	while(j<6)
	{
		printf("%s ",character[j]);
		j++;
	}
	puts("\n");
	return 0;
}						
