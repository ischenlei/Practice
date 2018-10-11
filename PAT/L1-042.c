#include <stdio.h>
int main()
{
	int year;
    int month;
    int days;
    scanf("%d-%d-%d",&month,&days,&year);
    printf("%d-%02d-%02d",year,month,days);
	
	return 0;
}
