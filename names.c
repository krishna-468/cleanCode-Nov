#include <stdio.h>

int main() {
	//code
	char names[][10] = {"Bosch", "names", "bbbb", "aaa", "bcd"};
	
	for(int i=0; i < strlen(names); i++)
	{
	    if(names[i][0] == 'B' || names[i][0] =='b')
	    {
	        printf("%s\n",names[i]);
	    }
	}
	return 0;
}
