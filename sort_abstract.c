//sorts an abstract data type. Data is a struct that contains name and happiness of people. 
#include<stdio.h>
//declaration of a struct called happiness which has happy levels and name of the person.
typedef struct{
int happy;
const char* name;
}happiness;

int order(int a, int b)
{
	//returns 1 if a is greater than b, where a and b are happiness levels of two people.
	if(a>b)
	return 1;
	else return 0;
}
void swap(happiness *a, happiness *b)	
{	// a and b are pointers to happiness variables and -> means the value of the attribute pointed by the pointer.
	happiness temp;
	temp.happy=a->happy;
	temp.name=a->name;
	a->happy=b->happy;
	a->name=b->name;
	b->happy=temp.happy;
	b->name=temp.name;
}	
int main() 
{
	//initiation of values of a happiness data type array called people.
	happiness people[3];
	people[0].happy=10;
	people[0].name="John";
	people[1].happy=100;
	people[1].name="Chris";	
	people[2].happy=50;
	people[2].name="Iype";
	int i=2,j=0;
	while(i>=0)
	{
		j=0;
		while(j<i)
		{	//checks if happiness levels are greater than the next ones.
			if(order(people[j].happy,people[j+1].happy))
				swap(&people[j],&people[j+1]);
		j++;
		}
		i--;
	}
	//prints the sorted array.
	printf("Sorted names in order of increasing happiness levels are :\n");
	while(j<3)
	{
		printf("%s\n",people[j].name);	
	j++;
	}
}	
