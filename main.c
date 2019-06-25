#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t t;
	struct tm *timeinfo;  //结构体
	time(&t);
	timeinfo = localtime(&t);
	printf("时间：%s\n", asctime(timeinfo));  //以字符串形式输出localtime本地时间

	return 0;
}
