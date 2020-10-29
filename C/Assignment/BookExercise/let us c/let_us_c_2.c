#include<stdio.h>

int main()
{
	float dkm,dm,df,di,dc;
	
	printf("Enter distance between two cities : ");
	scanf("%f",&dkm);
	dm=dkm*1000;
	df=dkm*3280.8399;
	di=dkm*39370.078;
	dc=dkm*100000;
	printf("\ndistance  in: \nMeters = %1.2f\nFeets = %1.2f\nInches =%1.2f\nCentimeters =%1.2f\n",dm,df,di,dc);
	
	return 0;
}
	
