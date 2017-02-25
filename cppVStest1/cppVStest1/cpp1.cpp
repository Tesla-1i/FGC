#include<iostream>
using namespace std;

class Date
{
public:
	Date();
	~Date();
	void init(int dd, int mm, int yy);
	void add_year(int n);
	void add_month(int n);
	void add_day(int n);
private:
	int d, m, y;
};			//·ÖºÅ²»¿ÉÍü



void Date::add_year(int n)
{
	y += n;
}

