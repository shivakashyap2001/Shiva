#include <stdio.h>
#include <conio.h>


int a,b,c;

void main ()
{


	printf("Please enter 3 integers\n");
	scanf("%d %d %d",  &a,&b,&c);
	printf("The integers from smallest to largest are:\n");

	if (a>b) {
		if (b<c){
		printf("%d %d %d", a,b,c);
		}

		else if (a<c){
		printf("%d %d %d", a,c,b);
		}
		else {
		printf("%d %d %d", c,a,b);
		}

	else{
		if (b>c){
		printf("%d %d %d", c,b,a);
		}
		else if (b<c){
		printf("%d %d %d", b,c,a);
		}
		else {
		printf("%d %d %d", b,a,c);
		}
	   }
       }
}