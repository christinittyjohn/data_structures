//merging two string arrays.
#include<stdio.h>
#include<string.h>
int main()
{
	char strings1[][10]={"a","b","c"};
	char strings2[][10]={"d","e","f"};
	char strings3[5][10];
	int i=0,i1=0;
	while(i1<=2)
	{
		strcpy(strings3[i],strings1[i1]);
		i++;
		i1++;
	}
	i1=0;
	while(i<=5)
	{
		strcpy(strings3[i],strings2[i1]);
		i++;
		i1++;
	}
	i=0;
	while(i<6)
	{
		printf("%s ", strings3[i]);
		i++;	
	}
	puts("\n");	
	return 0;	
}	
