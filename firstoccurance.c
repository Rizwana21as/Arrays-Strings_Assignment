// Description: Write a C program to find first occurrence of a word in a given string.
 
#include <stdio.h>
int main()
{
  	char str[100], word[100];
  	int i, j, Flag;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
	printf("\n Please Enter the Word that you want to Search for :  ");
  	gets(word);
	
	i = 0;
	     	   	
  	while(str[i] != '\0')
	{
		if(str[i] == word[0])
		{
			Flag = 1;
			j = 0;
			while(word[j] != '\0')
			{
				if(str[i + j] != word[j])
				{
					Flag = 0;
					break;
				}
				j++;
			}	
		}
		if(Flag == 1)
		{
			break;
		} 
		i++;
	}
	if(Flag == 0)
  	{
  		printf("\n Sorry!! We haven't found the Word '%s' ", word);
	}
	else
	{
		printf("\n We found '%s' at position %d ", word, i + 1);
	}	
	
  	return 0;
}

