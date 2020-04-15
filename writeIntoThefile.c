#include<stdio.h>

int writeFile() //create a file
{
	//we declare file pointer and after that open a file in fopen() function using 'w' operator.
	FILE *filePointer;
	filePointer = fopen("newfile.txt", "w");

	//check whether created a file or not.
		if(filePointer==NULL)
		{
			printf("file could not created !\n");
		}
		else
		{
			printf("file created !\n");
		}

	//write a text into the "newfile.txt"
	fprintf(filePointer, "this is a new file i am writing to here...");

	//close the file
	fclose(filePointer);
}


int main()
{
	writeFile();
	return 0;
}
