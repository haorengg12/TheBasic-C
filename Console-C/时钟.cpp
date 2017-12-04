#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int argc;
	char **argv;
	time_t temp;
	struct tm *t;
while(1)
{
	time(&temp);
	t=localtime(&temp);	
	printf("%dÄê%dÔÂ%dÈÕ\n",1900+t->tm_year,1+t->tm_mon,t->tm_mday);
	printf("%d:%d:%d",t->tm_hour,t->tm_min,t->tm_sec);
	sleep(1);
	system("cls");

}

}
