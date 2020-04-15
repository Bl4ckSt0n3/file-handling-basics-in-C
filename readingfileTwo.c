#include<stdio.h>

int readingFile() //create a file
{
	//we declare file pointer and after that open a file in fopen() function using 'w' operator.
	FILE *filePointer;
	filePointer = fopen("newfile.txt", "w");

	//declare a pointer for the content of file
	char c, *text = "we are writing this text into the newfile.txt";

	//check whether created a file or not.
		if(filePointer==NULL)
		{
			printf("file could not created !\n");
		}
		else
		{
			printf("file created !\n");
		}

	//write text into a "newfile.txt"
	fputs(text,filePointer);

	//close the file.
	fclose(filePointer);

	//now we get text from file
	//open file again this time using 'r' operator
	filePointer = fopen("newfile.txt","r");

	//we get character in the file each one
	while((c = fgetc(filePointer)) != EOF)
	{
		printf("%c", c);
	}

	//close the file
	fclose(filePointer);

}


int main()
{
	readingFile();
	return 0;
}
