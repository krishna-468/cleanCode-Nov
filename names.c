#include <stdio.h>

void displayStringStartsWithLetter(char letterToVerify, char names[][10])
{
    for(int index=0; index < strlen(names); index++)
	{
	    if(names[index][0] == letterToVerify)
	    {
	        printf("%s\n",names[index]);
	    }
	}
}

int main() {
	//code
	char names[][10] = {"Bosch", "names", "bbbb", "aaa", "Bcd"};
	
	displayStringStartsWithLetter('B',names);
	
	return 0;
}
