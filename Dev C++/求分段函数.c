#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	scanf("%d",&x);
	
	if ( x < 1 )
	{
		y = x;
	} else 
	if ( 1<=x && x < 10 )
	{
		y = 2 * x - 1;
	} else if ( x >= 10 )
	{
		y = 3 * x - 11;
	}
	
	printf("%d",y);
	
	return 0;
}