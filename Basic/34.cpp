#include <iostream>
#include <ctime>
#include <cstdio>
#include <chrono>

using namespace std;
int main()
{

	time_t now = time(nullptr);
	struct tm *localTime = localtime(&now);
	char buf[64];
	printf("seconds: %d\n", localTime->tm_sec);
	printf("minutes: %d\n", localTime->tm_min);
	printf("hours: %d\n", localTime->tm_hour);
	printf("Day of the month: %d\n", localTime->tm_mday);
	printf("Month: %d\n", localTime->tm_mon+1);
	printf("Year: %d\n", localTime->tm_year+1900);
	printf("Weekday: %d\n", localTime->tm_wday+1);
	printf("Day of the year: %d\n", localTime->tm_yday+1);
	printf("daylight savings: %d\n", localTime->tm_isdst);
	strftime(buf, 64, "%D", localTime);
	printf("Current Date: %s\n", buf);
	strftime(buf, 64, "%X", localTime);	
	printf("Current Time: %s", buf);

	return 0;
}
