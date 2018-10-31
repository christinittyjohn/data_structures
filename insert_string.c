// inserts key at a location in the string array.
#include<stdio.h>
#include<string.h>

int main()
{
	char strings[][10] = {"hi","ola","namasthe","good day","adieu","later bro","see ya"};
	char key[10];
	int i,location;	
	puts("enter location and the key to be inserted");
	scanf("%d %[^\n]%*c",&location,&key[0]);
	i=6;
	if(strings[6]==NULL)
		puts("array full");
	while(i>location)
	{
		strcpy(strings[i+1],strings[i]);
		i--;
	}
	strcpy(strings[location+1],key);
	i=0;
	while(i<8)
	{
		printf("%s\n",strings[i]);
		i++;
	}
	puts("\n");	
	return 0;
	}		
	
