// Delete a string from an array of strings.
#include<stdio.h>
#include"search_string.h"
int main()
{
	char strings[][10] = {"a","b"};
	char key[10] = "a";//delete a.
	int location = search(key,strings);
	while(location<=1)
	{  //move contents of next location to the address of the desired deletion address.
		strings[location][0]=strings[location+1][0];
		location++;
	}
	strings[1][0]=NULL;
	printf("%s\n",strings[0]);	
	return 0;
	}
