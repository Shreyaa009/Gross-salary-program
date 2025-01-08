#include<stdio.h>
int main()
{
	int bonus,cy,yoj,yr_of_serv;
	printf ("Enter current year and year of joining");
	scanf ("%d %d",&cy,&yoj);
	
	yr_of_serv=cy-yoj;
	
	if (yr_of_serv>3)
	{
		bonus=2500;
		printf ("bonus=Rs %d",bonus);
	}
	return 0;
	
}