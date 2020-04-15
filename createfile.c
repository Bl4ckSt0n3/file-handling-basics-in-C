#include<stdio.h>

int openFile() //create a file
{
	//we declare file pointer and after that open a file in fopen() function using 'w' operator.
	FILE *filePointer;
	filePointer = fopen("newfile.txt", "w");

	//check whether created a file or not.
	if(filePointer==NULL)
	{
		printf("file could not created !\n");
		return 0;
	}
	else
	{
		printf("file created !\n");
	}
}


int main()
{
	openFile();
	return 0;
}
