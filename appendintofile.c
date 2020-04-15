#include<stdio.h>

int appendIntoFile()
{
	//set a file pointer and variables
	FILE *filePointer;

	char c;
	char *text = "this text is append into the file", textBuffer[40];

	filePointer = fopen("newfile.txt", "w");
	fclose(filePointer);

	//open file with 'r' and  check wheter empty or not
	filePointer = fopen("newfile.txt","r");
	fgets(textBuffer,40,filePointer);
	printf("%s\n",textBuffer);
	fclose(filePointer);

	//open again for append text usind 'a' at this time
	filePointer = fopen("newfile.txt","a");
	fputs(text, filePointer);
	fclose(filePointer);

	//read file content again
	filePointer = fopen("newfile.txt","r");
	fgets(textBuffer,40,filePointer);
	printf("%s\n",textBuffer);

	//close file
	fclose(filePointer);
}
int main()
{
	appendIntoFile();
	return 0;
}
