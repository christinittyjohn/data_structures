// Search for string in a an array of strings.
#include<stdio.h>
#include<string.h>
int compare_strings(char *a, char *b)
{
	if(!strcmp(a,b))
	return 1;
	else return 0;
}	
int search(char* a,char b[][10])
{
	int i=0,found=0,location=0;
	while(i<6&found == 0)
	{
		if(compare_strings(b[i],a))
		{
			location = i;
			found = 1;
		}
		i++;
	}
	return location;
}
	
			
		
