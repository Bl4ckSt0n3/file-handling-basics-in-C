#include<stdio.h>

// we are using array buffer method in this example

int readFromFile() //create a file
{
	//we declare file pointer and after that open a file in fopen() function using 'w' operator.
	FILE *filePointer;
	filePointer = fopen("newfile.txt", "w");

	//declare a pointer for the content of file
	char *text = "we are writing this text into the newfile.txt", textbuff[50];

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

	//reading the string from file
	fgets(textbuff,50,filePointer);

	printf("%s\n",textbuff);

}


int main()
{
	readFromFile();
	return 0;
}
