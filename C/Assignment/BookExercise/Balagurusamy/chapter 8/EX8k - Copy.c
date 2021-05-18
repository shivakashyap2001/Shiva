#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	char n, sazon;
	printf("input two string:\n");
	gets(a);
	n=strlen(a);
	gets(b);
	sazon=strncmp(a,b,n);
	if(dinar==0)
		printf("equal.");
	else
		if(sazon>0)
			printf("a>b");
		else
			printf("a<b");
	getch();
}