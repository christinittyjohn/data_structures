// Search for string in a an array of strings.
#include<stdio.h>
#include<string.h>
int compare_strings(char *a, char *b)
{
	if(!strcmp(a,b))
	return 1;
	else return 0;
}	
int main()
{
	char strings[][10] = {"hi","ola","namasthe","good day","adieu","later bro","see ya"};
	int i=0,found=0,location=0;
	char key[10];
	puts("enter key to be searched :\n");
	scanf("%[^\n]%*c",&key[0]);
	while(i<6&found == 0)
	{
		if(compare_strings(strings[i],key))
		{
			location = i;
			found = 1;
		}
		i++;
	}
	if(!found)
	puts("Search incomplete: key was not found.");
	else
	printf("Search complete: %s was found at %d",key,location);
	return 0;
	}		
		
