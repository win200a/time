#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning (disable:4996)

#define MST  -4
#define UTC  0
#define UTC1 1
#define CCT  8

int main()
{
	time_t rawtime;
	struct tm * ptm;
	while (1)
	{
		time(&rawtime);
		ptm = gmtime(&rawtime);
		puts("Producer:win200a,Frank_feng");
		puts("Current time in several time zones in 2014 year:");
		printf("Washington  (U.S.)      : %2d:%2d:%2d\n", (ptm->tm_hour + MST) % 24, ptm->tm_min % 60, ptm->tm_sec % 60);
		printf("Greenwich   (England)   : %2d:%2d:%2d\n", (ptm->tm_hour + UTC) % 24, ptm->tm_min % 60, ptm->tm_sec % 60);
		printf("London      (England)   : %2d:%2d:%2d\n", (ptm->tm_hour + UTC1) % 24, ptm->tm_min % 60, ptm->tm_sec % 60);
		printf("Beijing     (China)     : %2d:%2d:%2d\n", (ptm->tm_hour + CCT) % 24, ptm->tm_min % 60, ptm->tm_sec % 60);
		Sleep(1000);
		system("cls");
	}
}