#include <stdio.h>
#include <stdlib.h>


struct date
{
	int year;
	int month;
	int day;
};

 struct date dateAddDays(struct date b, int days)
{
	return daysToDate(dateToDays(b) + days);
}
 
 struct date dateSubDays(struct date a, int days)
{
	return daysToDate(dateToDays(a) - days);
}

int dateToDays(struct date d)
{
	int sum = 0, i;
	extern int m[2][12];
	for (i = 1970; i < d.year; i++)
		sum =sum+ leap(i)+ 365;
	if (leap(d.year))
	{
		for (i = 0; i < d.month - 1; i++)
			sum = sum + m[0][i];
	}
	else
	{
		for (i = 0; i < d.month - 1; i++)
			sum = sum + m[1][i];
	}
	sum = sum + d.day;
	return sum;
}

int dayInterval(struct date a, struct date b)
{
	return dateToDays(b) - dateToDays(a);
}

struct date daysToDate(int days)
{
	int year = 1970, month = 1, day;
	struct date d2;
	extern int m[2][12];
	for (; days > 365 + leap(year); year++)
		days = days - (365 + leap(year));
	if (leap(year))
	{
		for (; days > m[0][month - 1]; month++)
			days = days - m[0][month - 1];
	}
	else
	{
		for (; days > m[1][month - 1]; month++)
			days = days - m[1][month - 1];
	}
	day = days;
	d2.year = year; d2.month = month; d2.day = day;
	return d2;
}


int isValidity(struct date d)
{
	int validity;
	char *info;
	if (d.year >= 1970 && d.year <= 2050)
	{
		if (d.month >= 1 && d.month <= 12)
		{
			if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12)
			{
				if (d.day >= 1 && d.day <= 31)
				{
					info = "日期合法";
					validity = 1;
				}
				else
				{
					info="日期不合法";
					validity = 0;
				}
			}
			else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
			{
				if (d.day >= 1 && d.day <= 30)
				{
					info = "日期合法";
					validity = 1;
				}
				else{
					info = "日期不合法";
					validity = 0;
				}
			}
			else
			{
				if (leap(d.year))
				{
					if (d.day >= 1 && d.day <= 29)
					{
						info = "日期合法";
						validity = 1;
					}
					else{
						info = "日期不合法";
						validity = 0;
					}
				}
				else
				{
					if (d.day >= 1 && d.day <= 28)
					{
						info = "日期合法";
						validity = 1;
					}
					else{
						info = "日期不合法";
						validity = 0;
					}
				}
			}
		}
		else{
			info = "月不合法";
			validity = 0;
		}
	}
	else {
		info = "年不合法";
		validity = 0;
	}
	outputDate(d);
	printf("%s\n", info);
	return validity;
}

int leap(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}

 void outputDate(struct date a)
{
	printf("year=%d;month=%d;day=%d\n", a.year, a.month, a.day);
}

int whatDay(struct date a)
{
	int offset = 4, i;
	
	
	int dateToDays(struct date d);
	i=(dateToDays(a) + offset - 2) % 7 + 1;
	return 1;
}

int main()
{
	struct date d1, d2;
	printf("input date1(year month day):\n");
	scanf_s("%d %d %d", &d1.year, &d1.month, &d1.day);//&&&&&&&&&&
	printf("input date2(year month day):\n");
	scanf_s("%d %d %d", &d2.year, &d2.month, &d2.day);
	if (!isValidity(d1) || !isValidity(d2))
		exit(0);
	 outputDate(d2);
	 outputDate(d1);
	printf("相差%d天\n",dayInterval(d1, d2));
	 outputDate(d1);
	printf("加上400天后的日期:");
	 outputDate(dateAddDays(d1, 400));
	 outputDate(d1);
	printf("减去400天后的日期:");
	 outputDate(dateSubDays(d1, 400));
	 outputDate(d1);
	printf("星期%d\n", whatDay(d1));
	 outputDate(d2);
	printf("星期%d\n", whatDay(d2));
	return 0;
}