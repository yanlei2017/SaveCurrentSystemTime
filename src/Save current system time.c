#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	time_t t;
	struct tm * lt;
	time(&t);//获取Unix时间戳。
	lt = localtime(&t);//转为时间结构。
	int year, month, day;
	year = lt->tm_year + 1900;
	month = lt->tm_mon + 1;
	day = lt->tm_mday;
	//FILE *fp = fopen("C:\\change_system_time\\time.bat", "w");
	FILE *fp = fopen("time.bat", "w");
	if (!fp)
	{
		printf("打开文件失败，程序退出！");
		//system("pause");
		exit(1);
	}
	fprintf(fp, "date %d/%d/%d", year, month, day);
	//printf("%d/%d/%d %d:%d:%d\n", year, month ,day, lt->tm_hour, lt->tm_min, lt->tm_sec);//输出结果
	// system("pause");
	return 0;
}