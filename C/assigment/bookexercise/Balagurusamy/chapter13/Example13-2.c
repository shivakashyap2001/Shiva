#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define NULL 0
int main()
{
	char *buffer;
	/*Allocating memory */
	if((buffer = (char  *)malloc(10)) == NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	//printf("Buffer of size %d created \n",_msize(buffer));
	strcpy(buffer,"HYDERABAD");
	printf("\nBuffer contain: %s \n ", buffer);
	/* Reallocation */
	/*if ((buffer = ( char *)realloc(buffer, 15)) ==NULL)
	{
		printf("Reallocation failed. \n");
		exit(1);
	}*/
	printf("\nBuffer size modified. \n");
	printf("\nBuffer still contain: %s \n" ,buffer);
	strcpy(buffer, "SECUNDERABAD");
	printf("\nBuffer now contain:%s \n" ,buffer);
	/* Freeing memory */
	free(buffer);

}	