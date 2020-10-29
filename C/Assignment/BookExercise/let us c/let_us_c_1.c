/*
	Let Us C - Excercise 1(a)
	Question: 
	Date: 2020-10-29
*/

#include<stdio.h>

int main()
{
	int bs;
	float hra,da,gs;
	printf("Enter Ramesh`s basic salary : ");
	scanf("%d",&bs);
	da=bs*0.4;
	hra=bs*0.2;
	gs=bs+hra+da;
	printf("Gross salary of Ramesh is %1.2f.\n",gs);
	
	return 0;
}

/*
	bs = 10000
	da = 4000	(Dearness Allowance)
	hra = 2000	(House Rent Allowance)
	gs = 16000
	
	Perks - Gym, lunch, Conveyance
*/
