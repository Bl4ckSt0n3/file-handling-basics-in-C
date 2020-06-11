# File handling in C and summary descriptions.
### Some operations about file handling in C language
<br>
<strong>fopen();</strong>
<br>
<p>
	This function is used to open a file in fact creates a file. It has some modes like r, w, a.
</p>
<br>
<pre>
	Syntax of fopen():
	FILE *fp;
	fp = fopen("filename","mode");
</pre>
<strong>fclose():</strong>
<br>
<p>
	This function closes the file of pointed by file pointer fp in the first description</p>
<br>
<pre>
	Syntax of fclose();
	fclose(fp);
</pre>
<br>
<strong>fgets():</strong>
<br>
<p>
    This function is used to read a file into the buffer like an array or etc. 
		We are using that function as below and again by fp we set in the first description.
</p>
<br>
<pre>
	Syntax of fgets():
	fgets(buffer,size,fp);
</pre>
<strong>fprintf();</strong>
<br>
<p>
	This function writes string into the file by using the fp. We use that in a C program below.
</p>
<br>
<pre>
	Syntax of fprintf():
	fprintf(fp,"text %d",buffer_variable_name);
</pre>
